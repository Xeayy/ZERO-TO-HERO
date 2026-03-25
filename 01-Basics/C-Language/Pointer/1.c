#include <stdio.h>

int main(void)
{
    int a = 10;

    //定义一个指针去指向变量a
    int* p = &a;

    //定义一个指针去获取变量中的数据
    printf("%d\n",*p);

    //利用指针去存储/修改数据
    *p =200;

    printf("%d\n",*p);
    printf("%d\n",a);

    return 0;

}