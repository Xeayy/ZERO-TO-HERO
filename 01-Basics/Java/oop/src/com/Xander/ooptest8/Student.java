package com.Xander.ooptest8;

public class Student {
    // 姓名, 年龄, 身高, 体重
    private String name;
    private int age;
    private int height;
    private int weight;

    //针对于每一个私有化的成员变量, 提供 get/set 方法
    public void setName (String name){
        this.name = name;
    }

    public String getName(){
        return name;
    }

    public void setAge (int age){
        if (age > 0){
            this.age = age;
        } else {
            System.out.println("年龄设置有误");
        }
    }

    public int getAge(){
        return age;
    }

    public void setHeight (int height){
        if (height > 0){
            this.height = height;
        } else {
            System.out.println("身高设置有误");
        }
    }
    public int getHeight(){
        return height;
    }

    public void setWeight (int weight){
        if (weight > 0){
            this.weight = weight;
        } else {
            System.out.println("体重设置有误");
        }
    }
    public int getWeight(){
        return weight;
    }

    // 成员方法: 学习
    public void study(){
        System.out.println(name + "正在学习");
    }


}
