package com.Xeay.test;

// 确定 Scanner 的位置
import java.util.Scanner;

public class scanner {
    public static void main(String[] args) {
    /*
        键盘录入:
            第一步: 找到 Scanner 这个打工人
            第二步: 让 Scanner 干活

    */
        // 1. 找到 Scanner
        Scanner sc = new Scanner(System.in);

        // 2. 让 Scanner 干活
        // 接收键盘录入的整数
        int num = sc.nextInt();
        System.out.println(num);

        // 接收键盘录入的双精度小数
        double d = sc.nextDouble();
        System.out.println(d);

        // 接收键盘录入的文本(字符串)
        String str = sc.next();
        System.out.println(str);
    }
}