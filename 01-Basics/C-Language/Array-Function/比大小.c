#include <stdio.h>

int max( int num1, int num2 ){
    int result;
    if( num1 > num2 ){
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int main(void){

    int a,b;

    if (scanf("%d %d", &a, &b) != 2) {
    printf("输入格式错误\n");
    return 1;
}

    int x = max (a,b);
    printf("%d更大\n",x);

    return 0;
}