#include <stdio.h>
/*
int main(void){

    printf("%d",'A');

    return 0;

}    */
                //得出A = 65

int main(void){
    int a[255];
    a['A'] = 1;

    printf("%d",a[65]);
    return 0;
}