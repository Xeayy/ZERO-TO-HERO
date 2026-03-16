#include <stdio.h>

int main(void){
    //定义数组
    int arr[] = {33,5,22,44,55};

    //定义变量max，记录数组最大值
    int max = arr[0];

    /*遍历数组得到每一个元素，拿着遍历到的元素跟max进行比较
    遍历到的元素 <= max里面记录的数据  不做任何处理
    遍历到的元素 > max里面记录的数据   max就要修改成新的值*/
    int len = sizeof(arr) / sizeof (int);

    for ( int i =0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    //输出max
    printf("%d\n",max);

    return 0;

}