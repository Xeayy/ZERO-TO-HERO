package com.Xander.ooptest4_1;

public class Test {
    public static void main(String[] args) {
        worker w = new worker();

        w.name = "张三";
        w.age = 28;
        w.workExperience = 10;

        System.out.println(w.name);
        System.out.println(w.age);
        System.out.println(w.workExperience);

        w.work();
    }
}
