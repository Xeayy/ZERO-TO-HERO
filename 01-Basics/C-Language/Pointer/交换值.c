#include <stdio.h>

void swap (int* p1, int* p2);

int main(void)
{
    //定义两个变量
    int a = 10;
    int b = 20;

    //调用swap函数
    printf("调用前：%d,%d\n",a,b);
    swap(&a,&b);
    printf("调用后：%d,%d\n",a,b);

    return 0;


}

void swap (int* p1, int* p2)
{
    //此时交换的是p1指向的变量和p2指向的变量的值
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}