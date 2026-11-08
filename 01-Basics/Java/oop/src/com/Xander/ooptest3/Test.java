package com.Xander.ooptest3;

public class Test {
    public static void main(String[] args) {
        Teacher t = new Teacher();

        // 赋值
        t.name = "阿玮";
        t.age = 18;

        // 获取老师的信息并打印在控制台上
        System.out.println(t.name);
        System.out.println(t.age);

        //相当于让老师去干活
        t. teach();
        t.eat();
        t.sleep();

    }
}
