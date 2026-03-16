#include <stdio.h>

void printArr(int arr[],int len)
{
    for (int i = 0; i < len; i++){
        printf("%d\n",arr[i]);
    }
}

int main(void){
    int arr[] = {1,2,3,4,5,};       //定义数组

    int len = sizeof(arr) / sizeof(int);

    printArr(arr,len);              
    
                                    //调用函数遍历数组

    return 0;
}

