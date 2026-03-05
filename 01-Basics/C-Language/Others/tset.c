/*
#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);

    switch(x){
        case 0:
        printf("0");
        break;

        default:
        if (x>0){
            printf("%d",2*x);
        }else {
            printf("-1");
        }

    }
    return 0;

}
*/
/*
#include <stdio.h>

int main(void){
    int number;
    int sum = 0;
    int count = 0;

    scanf("%d",&number);
    while(number != -1){
        sum += number;
        count ++;
        scanf("%d",&number);
    }
    printf("%f\n",1.0*sum/count);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(0));

    int number = rand()%100+1;
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1到100之间的数。\n");

    do {
        printf("请猜猜这个数：\n");
        scanf("%d",&a);
        count ++;

        if( a > number ){
            printf("你猜的数大了\n");
        } else if ( a < number ) {
            printf("你猜的数小了\n");

        }
        
    }while ( a != number);

        printf("恭喜你，用了%d次就猜到了答案。\n",count);
    
    return 0 ;

}

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
}*/



