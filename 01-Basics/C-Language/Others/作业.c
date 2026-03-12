
#include <stdio.h>

int main(void) {
    int a[10]; 
    int max, min; 
    int i; 

    printf("请输入10个正整数:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i < 10; i++) {

        if (a[i] > max) {
            max = a[i];
        }
  
        if (a[i] < min) {
            min = a[i];
        }
    }


    printf("最大值是:%d\n", max);
    printf("最小值是:%d\n", min);

    return 0;
}