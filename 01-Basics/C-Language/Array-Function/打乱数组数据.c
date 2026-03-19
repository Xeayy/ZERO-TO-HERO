#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //定义数组
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(int);

    //遍历数组，得到每一个元素，让这个元素跟随机索引处的元素进行交换
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        //获得一个随机索引
        //0~4(长度 - 1)
        int index = rand() % len;
        //拿着i指向的元素，跟index指向的元素进行交换
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;

    }
    //遍历数组
    for(int i =0; i< len; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}