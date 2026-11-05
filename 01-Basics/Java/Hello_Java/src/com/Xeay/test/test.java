package com.Xeay.test;

import java.util.Scanner;

public class test {
    public static void main(String[] args) {
    /*
    彩票中奖案例，生成一个7位的随机数表示彩票号码，键盘录入一个7位数表示用户购买的彩票
    判断用户输入的彩票号码是否和系统生成的彩票号码一致
    */

    // 1. 生成一个7位的随机数表示彩票号码
        int lottery = (int)(Math.random() * 10000000);


    // 2. 键盘录入一个7位数表示用户购买的彩票
        int user;
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入一个7位数表示用户购买的彩票号码：");
        user = scanner.nextInt();


    // 3.判断用户输入的彩票号码是否和系统生成的彩票号码一致
        if (lottery == user) {
            System.out.println("中奖了");
        } else {
            System.out.println("未中奖");
        }
    }
}
