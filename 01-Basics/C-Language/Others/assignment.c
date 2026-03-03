#include<stdio.h>

int main (void){
    int BJT;
    scanf("%d",&BJT);

    int hour = BJT/100;
    int minute = BJT%100;

    int UTC_hour = hour - 8;
    
    if(UTC_hour < 0){
        UTC_hour+=24;
    }

    int UTC = UTC_hour*100+minute;

    printf("%d",UTC);

    return 0;
}