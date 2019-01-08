/* pizza.c -- 在比萨饼程序中使用已定义的常量 */
#include<stdio.h>
#define PI 3.14159	//定义
int main(void)
{
	float area,circum,radius;
	printf("What is the radius of your pizza?\n");
	scanf("%f",&radius);
	area = PI*radius*radius;	//面积	πr 2
	circum = 2.0*PI*radius;	//周长	2πr
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f ,area = %1.2f\n",circum,area);
	return 0;
}
