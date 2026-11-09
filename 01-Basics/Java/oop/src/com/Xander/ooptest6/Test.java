package com.Xander.ooptest6;

public class Test {
    public static void main (String[] args){
        // 1. 创建学生对象
        Student s = new Student();

        // 2. 赋值
        s.setName("张三");
        s.setAge(18);
        s.setHeight(183);
        s.setWeight(70);

        // 要求 1:
        // 大一新生, 张三, 18 岁, 183cm, 70kg, 刚进大学努力学习.
        System.out.println("大一新生, " + s.getName() + ", " + s.getAge() + " 岁, " + s.getHeight() + "cm, " + s.getWeight() + "kg, 刚进大学努力学习.");
        s.study();

        // 要求 2:
        // 隐藏的逻辑: 年龄加 1
        s.setAge(s.getAge() + 1);
        // 大二期间张三体重增加了 10kg
        int newWeight = s.getWeight() + 10;
        s.setWeight(newWeight);
        System.out.println("大二期间张三体重增加了 10kg, 现在的体重是 " + s.getWeight() + "kg");

        // 要求 3:
        // 大三期间张三减肥成功, 身高增加 2cm, 体重减少 3kg
        s.setAge(s.getAge() + 1);
        int newHeight = s.getHeight() + 2;
        s.setHeight(newHeight);

        int newWeight2 = s.getWeight() - 3;
        s.setWeight(newWeight2);
        System.out.println("大三期间张三减肥成功, 身高增加 2cm, 体重减少 3kg, 现在的身高是 " + s.getHeight() + "cm, 体重是 " + s.getWeight() + "kg");

        // 要求 4:
        // 打印张三毕业之后的所以信息
        s.setAge(s.getAge() + 2);
        System.out.println("张三毕业之后的信息: " + s.getName() + ", " + s.getAge() + " 岁, " + s.getHeight() + "cm, " + s.getWeight() + "kg");
    }
}
