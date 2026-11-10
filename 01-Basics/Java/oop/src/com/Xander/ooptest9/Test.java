package com.Xander.ooptest9;

public class Test {

    public static void main(String[] args) {
        // 定义一个 Javabean 类描述学生
        // 属性: 姓名 年龄 性别 身高

        //创建对象
        Student s = new Student();
        System.out.println(s.getName());
        System.out.println(s.getAge());
        System.out.println(s.getGender());
        System.out.println(s.getHeight());

        Student ss = new Student("zhangsan",23,"男",175);
        System.out.println(ss.getName());
        System.out.println(ss.getAge());
        System.out.println(ss.getGender());
        System.out.println(ss.getHeight());
    }
}
