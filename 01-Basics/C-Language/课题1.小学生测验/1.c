#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define QUESTION_COUNT 10
#define MAX_ATTEMPTS 3
#define INPUT_BUFFER_SIZE 128

/*
 * 题目结构体：保存一道题所需的全部信息。
 * number1  : 第一个操作数
 * number2  : 第二个操作数
 * is_add   : 1 表示加法，0 表示减法
 * answer   : 正确答案
 */
typedef struct
{
	int number1;
	int number2;
	int is_add;
	int answer;
} Question;

/*
 * 生成一道符合要求的题目。
 * 规则：
 * 1. 题目类型随机为加法或减法。
 * 2. 所有操作数都在 0~50 之间。
 * 3. 结果也必须在 0~50 之间，且不能出现负数。
 */
void generate_question(Question *question)
{
	int type = rand() % 2; /* 0 表示减法，1 表示加法 */

	question->is_add = type;

	if (type == 1)
	{
		/* 加法：先随机确定第一个加数，再限制第二个加数的最大值，
		   保证和不超过 50。 */
		question->number1 = rand() % 51;
		question->number2 = rand() % (51 - question->number1);
		question->answer = question->number1 + question->number2;
	}
	else
	{
		/* 减法：先随机确定被减数，再让减数不超过被减数，
		   保证差值不为负数。 */
		question->number1 = rand() % 51;
		question->number2 = rand() % (question->number1 + 1);
		question->answer = question->number1 - question->number2;
	}
}

/*
 * 从标准输入读取一个整数。
 * 防错机制：
 * 1. 如果用户输入的是字母或其他非整数内容，提示重新输入。
 * 2. 只有真正输入了一个合法整数，函数才返回 1。
 * 3. 该函数不会消耗答题次数，答题次数由外层逻辑单独控制。
 */
int read_int(int *value)
{
	char buffer[INPUT_BUFFER_SIZE];
	char *endptr = NULL;
	long temp;

	if (fgets(buffer, sizeof(buffer), stdin) == NULL)
	{
		return 0;
	}

	temp = strtol(buffer, &endptr, 10);

	/* 跳过前导空白，确保输入确实是整数。 */
	while (*endptr != '\0' && isspace((unsigned char)*endptr))
	{
		endptr++;
	}

	/* 如果 endptr 没有停在字符串结尾，说明输入里混有非法字符。 */
	if (*endptr != '\0' && *endptr != '\n')
	{
		return 0;
	}

	*value = (int)temp;
	return 1;
}

/*
 * 处理一道题：负责显示题目、接收答案、判题与计分。
 * 返回值：本题最终得分（10 / 7 / 5 / 0）。
 */
int handle_question(const Question *question, int question_index)
{
	int attempt;
	int user_answer;

	printf("\n第 %d 题：%d %c %d = ?\n",
		   question_index,
		   question->number1,
		   question->is_add ? '+' : '-',
		   question->number2);

	for (attempt = 1; attempt <= MAX_ATTEMPTS; attempt++)
	{
		printf("请输入答案（第 %d/%d 次机会）：", attempt, MAX_ATTEMPTS);

		/* 如果输入不是整数，则重新提示，但不消耗本次机会。 */
		if (!read_int(&user_answer))
		{
			printf("输入有误，请输入整数。\n");
			attempt--;
			continue;
		}

		if (user_answer == question->answer)
		{
			if (attempt == 1)
			{
				printf("回答正确，本题得 10 分！\n");
				return 10;
			}
			else if (attempt == 2)
			{
				printf("回答正确，本题得 7 分！\n");
				return 7;
			}
			else
			{
				printf("回答正确，本题得 5 分！\n");
				return 5;
			}
		}

		if (attempt < MAX_ATTEMPTS)
		{
			printf("回答错误，请重新输入。\n");
		}
	}

	printf("三次机会已用完，正确答案是：%d\n", question->answer);
	return 0;
}

/*
 * 根据总分输出等级评价。
 * 题目总分 100 分，因此按分数区间输出对应评价。
 */
void print_level(int total_score)
{
	if (total_score >= 90)
	{
		printf("评级：SMART\n");
	}
	else if (total_score >= 80)
	{
		printf("评级：GOOD\n");
	}
	else if (total_score >= 70)
	{
		printf("评级：OK\n");
	}
	else if (total_score >= 60)
	{
		printf("评级：PASS\n");
	}
	else
	{
		printf("评级：TRY AGAIN\n");
	}
}

int main(void)
{
	Question question;
	int i;
	int total_score = 0;

	/*
	 * 设置本地化环境，尽量让控制台按系统默认编码正确处理中文。
	 * 在 Windows 下再额外切到 UTF-8 代码页，减少中文乱码问题。
	 */
	setlocale(LC_ALL, "");
	#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	#endif

	/* 以当前时间作为随机数种子，保证每次运行题目不同。 */
	srand((unsigned)time(NULL));

	printf("========================================\n");
	printf("        小学生 50 以内加减法测验       \n");
	printf("========================================\n");
	printf("说明：共 10 道题，每题最多 3 次机会。\n");

	for (i = 1; i <= QUESTION_COUNT; i++)
	{
		generate_question(&question);
		total_score += handle_question(&question, i);
	}

	printf("\n========================================\n");
	printf("测验结束，您的总分是：%d / 100\n", total_score);
	print_level(total_score);
	printf("========================================\n");

	return 0;
}
