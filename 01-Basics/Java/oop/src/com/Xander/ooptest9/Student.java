package com.Xander.ooptest9;

public class Student {
    // 属性: 姓名 年龄 性别 身高
    private String name;
    private int age;
    private String gender;
    private int height;

    // 构造方法
    // 习惯: 空参
    public Student(){
        System.out.println("空参构造方法被调用了~");
    }

    // 带全部参数的构造
    public Student(String name, int age, String gender, int height){
        System.out.println("带全部参数的构造被调用了~");
    }
}
