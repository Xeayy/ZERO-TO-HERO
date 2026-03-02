#include <stdio.h>
int main(){
	int age,days;
	printf("请输入你的年龄：");
	scanf("%d",&age);
	
	days=age*365;
	
	printf("%d岁大约等于%d天\n",age,days);
	
	return 0;
}
