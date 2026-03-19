#include <stdio.h>

void printArr(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main(void)
{
    //定义数组
    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(int);

    //键盘录入数据
    for (int i =0; i < len; i++)
    {
        printf("请录入第%d个元素\n",i + 1);
        scanf("%d",&arr[i]);
    }

    //遍历数组
    printArr(arr,len);

    //反转数组
    int i = 0;
    int j = len - 1;
    while (i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    //遍历数组
    printArr(arr,len);

    return 0;
}