#include <stdio.h>

int main(void)
{
    //1.定义数组存储数据
    int arr[] = {3,5,2,1,4};
    int len = sizeof(arr) / sizeof(int);

    //2.利用冒泡排序，把数组中的数据按照升序排列
    //双重循环本质：就是把内循环重复执行n次
    //首先看内循环的作用

    for (int i = 0; i < len - 1; i++)
    {
            for (int j = 0; j < len - 1 - i; j++) 
        {
            //把相邻的元素两两比较，小的在前，大的再后
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j+1] = temp;
            }
        }
    }

    /*

    //第一轮：
     for (int i = 0; i < len - 1 - 0; i++) 
    {
        //把相邻的元素两两比较，小的在前，大的再后
        if(arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i +1];
            arr[i+1] = temp;
        }
    }
  
    //3 2 1 4 5
    //第二轮：
      for (int i = 0; i < len - 1 - 1; i++) 
    {
        //把相邻的元素两两比较，小的在前，大的再后
        if(arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i +1];
            arr[i+1] = temp;
        }
    }

    //第三轮：
     for (int i = 0; i < len - 1 - 2; i++) 
    {
        //把相邻的元素两两比较，小的在前，大的再后
        if(arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i +1];
            arr[i+1] = temp;
        }
    }
    
    //第四轮：
     for (int i = 0; i < len - 1 - 3; i++) 
    {
        //把相邻的元素两两比较，小的在前，大的再后
        if(arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i +1];
            arr[i+1] = temp;
        }
    }

    */

    //遍历
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}