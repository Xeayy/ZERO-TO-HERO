/*
 #include <stdio.h>
int main(void) {
    int hour1,minute1;
    int hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;

    int t = t2 - t1 ;
     printf("时间差是%d小时%d分。\n",t/60,t%60);

}
*/
/*
#include <stdio.h>
int main (void) {
    double a,b;
    scanf("%lf %lf",&a,&b);

    double c = (a+b)/2.0;

    printf("%f和%f的平均值=%f\n",a,b,c);
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int t;

    t = a;
    a = b;
    b = t;

    printf("a = %d b = %d\n",a,b);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int a;
    a = 10;

    printf("a++=%d\n",a++);
    printf("a=%d\n",a );

    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    printf("Hello World\n");
    return 0;
}
*/
/*#include <stdio.h>

int main(void) {
    int num = 0;

    int a,b,c;

    scanf("%d",&num);

    a = num / 100;
    b = (num % 100) / 10;
    c = (num%100)%10;

    int d = c*100+b*10+a;

    printf("%d",d);

    return 0;
}*//*
#include <stdio.h>

int main(void) {
    int h1,m1;
    int h2,m2;

    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);

    int ih = h2 - h1;
    int im = m2 - m1;
    if(im < 0) {
        im = im + 60;
        ih--;
    }
    printf("时间差是%d小时%d分。\n",ih,im);

    return 0;
}
*//*
#include <stdio.h>

int main (void) {
    int a = 5;

    printf("%d",a>8);

    return 0;
}
*//*
#include <stdio.h>

int main(viod) {
    int price = 0;
    int bill = 0;

    scanf("%d %d",&price,&bill);

    //判定
    if(price<=bill) {
        printf("找您%d元\n",bill - price);
    }
    else
        printf("您的钱不够");

    return 0;

}*//*
#include <stdio.h>

int main(void) {
    int max = 0;
    int a = 0;
    int b = 0;

    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);

    if( a >= b ) {
        if( a > b ) {
            max = a;
            printf("大的那个是%d\n",max);
        }
        else {
            printf("两个数一样大");
        }
    }
    else {
        max = b;
        printf("大的那个是%d\n",max);
    }
    return 0;

}/*
#include <stdio.h>

int main(void) {
    int a, b;

    printf("请输入两个整数：");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("输入错误！\n");
        return 1;
    }

    if (a > b) {
        printf("大的那个是%d\n", a);
    } else if (b > a) {
        printf("大的那个是%d\n", b);
    } else {
        printf("两个数一样大\n");
    }

    return 0;
}*//*
#include <stdio.h>

int main(void) {
    int x = 0;
    int n = 0;

    scanf("%d",&x);
    n++;

    x/=10;

    while(x>0) {
        n++;
        x/=10;
    }
    printf("%d",n);

    return 0;
}*/
/*
#include <stdio.h>
int main(void) {
    int a = 0;
    int n = 0;

    scanf("%d",&a);

    do {
        a/=10;
        n++;
    }while (a>0);

    printf("%d",n);

    return 0;
}*/
































