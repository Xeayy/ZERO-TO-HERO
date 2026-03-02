//
// Created by 25330 on 25-10-11.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    i nt i,j;
    i = 1;
    while ( i<= n ) {
        j = 1;
        while ( j<= i) {
            printf("%d * %d = %d",j,i,j*i);
            if ( i*j < 10) {
                printf("   ");
            } else {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}