package com.Xander.ooptest;

public class Test  {
        public static void main (String[] args){
            // 创建对象, 记录第一只小狗的信息
            // 格式:
            //      类名  对象名 = new   类名()

            // 创建了一个对象, 管理第一只小狗的信息
            Dog d1 = new Dog();

            // 赋值
            d1.name = "小婷";
            d1.age = 19;
            d1.weight = 114514;
            d1.color = "黄色";

            // 获取第一只小狗的信息
            System.out.println(d1.name);
            System.out.println(d1.age);
            System.out.println(d1.weight);
            System.out.println(d1.color);


            // 创建第二个对象, 管理第二只小狗的信息
            Dog d2 = new Dog();
            d2.name = "臭狗";
            d2.age = 3;
            d2.weight = 5.5;
            d2.color = "白色";

            // 获取第二只小狗的信息
            System.out.println(d2.name);
            System.out.println(d2.age);
            System.out.println(d2.weight);
            System.out.println(d2.color);

        }
}
