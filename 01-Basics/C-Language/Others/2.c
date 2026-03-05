#include <stdio.h>

int main(void){
    int score;
    scanf("%d",&score);

    int x = score/10;

    switch(x){
        case 10:
        case 9:
        printf("A");
        break;

        case 8:
        printf("B");
        break;

        case 7:
        printf("C");
        break;

        case 6:
        printf("D");
        break;

        default:
        printf("E");
        break;
    }
    return 0;

}