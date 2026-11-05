package com.Xeay.test;
// package: 表示当前的类定义在那个包下

import java.util.Scanner; // 对应 C 的 #include, 引入控制台输入工具

// class 表示定义一个类, 类是 Java 项目中最基本的组成单元
public class Hello_Java {
    // Java 程序的主入口, 当程序开始运行的时候, 会从主入口开始逐行往下执行
    public static void main(String[] args){
        // 1. 基础输出
        System.out.println("--- Java 控制台启动成功 ---");

        // 2. 基础语法
        int score = 85;
        if ( score >= 60 ) {
            System.out.println("成绩及格,得分: " + score); // 用 + 直接拼接文本与数值
        }

        // 3. 循环结构: 语法与 C 相同
        for ( int i = 1; i <= 3; i++ ){
            System.out.println("当前循环计数: " + i );
        }

        // 4. 控制台键盘录入: 对应 C 的 scanf
        Scanner sc = new Scanner(System.in);
        System.out.print("请输入一个整数: ");
        int inputVal = sc.nextInt();
        System.out.println("你输入的数字平方是: " + ( inputVal * inputVal ));
        sc.close();
    }

}

