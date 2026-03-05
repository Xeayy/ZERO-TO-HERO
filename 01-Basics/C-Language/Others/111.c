#include <stdio.h>

int main(void){
    int type;
    scanf("%d",&type);

    switch (type){
    case 1: 
        printf("早上好\n");
        break;

    case 2:
        printf("你好\n");
        break;

    case 3:
        printf("晚上好\n");
        break;

    default:
        printf("这样啊...\n");
        break;}

    return 0;
}