#include <stdio.h>


/* 作用：利用二分查找查找数据
返回值：数据在数组中的索引
找到了，真实的索引
没找到，返回-1*/

int binarySearch(int arr[],int len, int num)
{
    //1.确定查找的范围
    int min = 0;
    int max = len - 1;

    //2.利用循环不断地进行查找
    while (min <= max)
    {
        //确定中间位置
        int mid = (min + max) / 2;
        /*比较
        min max mid 表示索引
        num表示要查找的元素
        坑：arr[mid]跟num进行比较*/

        if (arr[mid] < num)
        {
            //要查找的数据是在右边
            min = mid + 1;
        } else if(arr[mid] > num)
        {
            //要查找的数据是在左边
            max = mid -1;
        }
        else
        {
            return mid;
        }
    }
    //3.如果min大于max了，表示数据不存在，返回-1
    return -1;

}


int main()
{
    //1.定义数组
    int arr[] = {7,23,79,81,103,127,131,147};
    int len = sizeof(arr) / sizeof(int);

    //2.定义变量表示要查找的数据
    int num = 131;

    //3.调用函数查找数据
    int index = binarySearch(arr,len,num);

    //4.输出
    printf("%d\n",index);

    return 0;
 }


