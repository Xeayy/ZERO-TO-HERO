#include <stdio.h>

int main(void){
    int a,b;
    int t;
    scanf("%d %d",&a,&b);

    while( b!= 0 ){
        t = a%b;
        a = b;
        b = t;
    } 
    printf("GCD = %d\n",a);

    return 0;
}