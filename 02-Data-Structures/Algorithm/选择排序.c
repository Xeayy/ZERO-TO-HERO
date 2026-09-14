#include <stdio.h>

int main(void)
{
    //1.定义数组存储元素
    int arr[] = {3,5,2,1,4};
    int len = sizeof(arr) / sizeof(int);

    //2.利用选择排序，将数组中的数据按照升序进行排列
    for (int i = 0; i < len - 1; i++)
    {
        //i：依次表示数组中的每一个索引
        /*第一轮 i = 0  i = 1 2 3 4
        第二轮 i = 1  j = 2 3 4 
        ...
        */

        for (int j = i + 1; j < len; j++)
        {
            //j：依次表示i索引后面的每一个索引
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //遍历
    for (int i =0; i < len; i ++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}