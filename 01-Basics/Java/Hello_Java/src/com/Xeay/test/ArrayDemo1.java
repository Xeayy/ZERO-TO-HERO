package com.Xeay.test;

import java.util.Scanner;

public class ArrayDemo1 {
    public static void main(String[] args) {
        /*
        数组的动态初始化：
            需求：键盘录入5个的整数，存入数组当中，并进行遍历
            动态初始化的格式：
            数据类型[]数组名=new数据类型[数组的长度];
         */

        //键盘录入 5 个整数, 存入数组中, 并进行遍历

        // 1. 创建数组
        int[] arr = new int[5];

        // 2. 键盘录入
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < arr.length; i++) {
            System.out.println("请输入一个整数:");
            int num = sc.nextInt();
            // 把接收的数据赋值给数组
            arr[i] = num;
        }
        // 3.数组的遍历
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
