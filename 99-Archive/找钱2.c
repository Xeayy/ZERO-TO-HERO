#include <stdio.h>

int main()
{
	printf("请输入身高的英尺和尺寸,如输入5 7表示5英尺7英寸:");
	
	double foot,inch;
	
	scanf("%lf %lf",&foot,&inch);
	
	printf("身高是%f米。\n",(foot+inch/12.0)*0.3048);
	
	return 0;
}
