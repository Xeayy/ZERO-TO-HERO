package com.Xander.ooptest6;

public class Student {
    // 姓名, 年龄, 身高, 体重
    private String name;
    private int age;
    private int height;
    private int weight;

    //针对于每一个私有化的成员变量, 提供 get/set 方法
    public void setName (String value){
        name = value;
    }

    public String getName(){
        return name;
    }

    public void setAge (int num){
        if (num > 0){
            age = num;
        } else {
            System.out.println("年龄设置有误");
        }
    }

    public int getAge(){
        return age;
    }

    public void setHeight (int num){
        if (num > 0){
            height = num;
        } else {
            System.out.println("身高设置有误");
        }
    }
    public int getHeight(){
        return height;
    }

    public void setWeight (int num){
        if (num > 0){
            weight = num;
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
