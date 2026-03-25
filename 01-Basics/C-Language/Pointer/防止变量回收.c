#include <stdio.h>

int* method();

int  main(void)
{
    //调用method函数，并使用该函数中的变量a
    int*p = method();

    printf("%d\n",*p);//method函数结束后，该函数里面所有的变量也会随之消失

    return 0;
}

int* method()
{
    static int a = 10;
    return &a;
}