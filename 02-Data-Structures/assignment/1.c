/*#include <stdio.h>

int Palindrome_Test() {
    char s[100];
    char q[100];
    int top = -1;
    int rear = 0;
    char c;

    while ((c = getchar()) != '@') {
        s[++top] = c;
        q[rear++] = c;
    }

    for (int i = 0; i <= top; i++) {
        if (s[top - i] != q[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("请输入字符串: ");
    if (Palindrome_Test())
        printf("是回文\n");
    else
        printf("不是回文\n");
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

typedef struct {
    char data[MAX_SIZE];
    int front, rear;
} Queue;

void initStack(Stack *s) {
    s->top = -1;
}

void push(Stack *s, char c) {
    s->data[++(s->top)] = c;
}

int pop(Stack *s, char *c) {
    if (s->top != -1) {
        *c = s->data[(s->top)--];
        return 1;
    }
    return 0;
}

void initQueue(Queue *q) {
    q->front = q->rear = 0;
}

void enQueue(Queue *q, char c) {
    q->data[q->rear++] = c;
}

int deQueue(Queue *q, char *c) {
    if (q->front != q->rear) {
        *c = q->data[(q->front)++];
        return 1;
    }
    return 0;
}

int main() {
    Stack s;
    Queue q;
    char c, x, y;
    int isPalindrome = 1;

    initStack(&s);
    initQueue(&q);

    printf("Input: ");

    while ((c = getchar()) != '@') {
        push(&s, c);
        enQueue(&q, c);
    }

    while (s.top != -1) {
        pop(&s, &x);
        deQueue(&q, &y);
        if (x != y) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}