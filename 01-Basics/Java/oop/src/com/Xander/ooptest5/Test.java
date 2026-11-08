package com.Xander.ooptest5;

import java.lang.constant.DynamicConstantDesc;

public class Test {
    public static void main(String[] args){
        Dog d = new Dog ();
        d.setName("小白");
        d.setAge(2);
        System.out.println(d.getName() + "," + d.getAge());

        d.eat();

    }
}
