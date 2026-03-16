#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    //定义数组
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(int);

    //生成10个随机数存入数组

    srand(time(NULL));              //设置种子
    for(int i = 0; i < len; i++)    //生成随机数
    {
        int num = rand() % 100 + 1;
        //把随机数存入到数组
        arr[i] = num;
    }

    //利用累加求数组中所有数据的和
    int sum = 0;
    for (int i =0; i < len; i++)
    {
        sum =sum + arr[i];
    }

    //输出
    printf("%d\n",sum);

    return 0;
}
