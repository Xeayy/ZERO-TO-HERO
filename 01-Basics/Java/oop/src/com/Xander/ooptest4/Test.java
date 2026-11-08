package com.Xander.ooptest4;

public class Test {
    public static void main(String[] args){
        // 创建厨师的对象
        Cook c = new Cook();

        // 赋值
        c.name = "张三";
        c.age = 38;
        c.cookLevel = 10;

        //获取厨师的属性值并打印在控制台
        System.out.println(c.name);
        System.out.println(c.age);
        System.out.println(c.cookLevel);

        c.cooking();
    }
}
