#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);

    if(x <= 1){
        printf("不是素数");
        return 0;
    }

    int i;
    int a = 1;

    for ( i=2;i<x;i++ ){
        if ( x % i ==0 ){
            a = 0;
            break;
        }
    }
    if ( a ==0 ){
        printf("不是素数");
    }else{
        printf("是素数");
    }

    return 0;
}
