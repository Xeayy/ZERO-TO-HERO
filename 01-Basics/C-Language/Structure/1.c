#include <stdio.h>
#include <string.h>

struct GirlFriend
{
    char name[100];
    int age;
    char gender;
    double height;
};

int main()
{
    struct GirlFriend gf1;
    strcpy(gf1.name,"伊蕾娜");
    gf1.age = 15;
    gf1.gender = 'F';
    gf1.height = 1.5;

    printf("%s\n",gf1.name);
    printf("%d\n",gf1.age);
    printf("%c\n",gf1.gender);
    printf("%lf\n",gf1.height);

    struct GirlFriend gf2;
    strcpy(gf2.name,"玲音");
    gf2.age = 14;
    gf2.gender = 'F';
    gf2.height = 1.5;

    printf("%s\n",gf2.name);
    printf("%d\n",gf2.age);
    printf("%c\n",gf2.gender);
    printf("%lf\n",gf2.height);



    return 0;
}