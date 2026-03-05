#include  <stdio.h>
int main(void){
    int a,m = 0,n = 0;
    do {
        scanf("%d",&a);

        if ( a == -1 ){
            break;
    }

        if( a % 2 == 0 ){
            m++;
        } else {
            n++;
        }
    }
    while ( a != -1 );
    printf("%d %d",n,m);

    return 0;
}