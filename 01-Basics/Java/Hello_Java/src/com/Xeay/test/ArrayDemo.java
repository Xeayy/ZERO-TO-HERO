package com.Xeay.test;

public class ArrayDemo {
    public static void main(String[] args){
/*        数组的静态初始化
            完整格式:
            数据类型[] 数组名 = {元素1, 元素2, 元素3, ...};

            简化格式:
            数据类型[] 数组名 = {元素1, 元素2, 元素3, ...};
 */
        // 1. 定义数组存储 3 位同学的年龄
        int [] ageArr1 = new int[]{18, 19, 20};
        int [] ageArr2 = {18, 19, 20};

        // 2.定义数组存储 5 位同学的身高
        double [] heightArr = new double [] {1.75, 1.76, 1.77, 1.78, 1.79};
        double [] heightArr2 = {1.75, 1.76, 1.77, 1.78, 1.79};

        // 3. 定义数组存储 5 位同学的姓名
        String [] nameArr = new String [] {"张三", "李四", "王五", "赵六", "孙七"};
        String [] nameArr2 = {"张三", "李四", "王五", "赵六", "孙七"};
    }

}
