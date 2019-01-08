#include <stdio.h>
int main()
{
	float weight;	//你的体重
	float value;		//相等体重的白金价值
	printf("Are you worth your weight in platinum?\n");
	printf("let's check it out.\n");
	printf("Please enter your weight in pounds :  ");	//pounds  英镑
	//获取用户的输入
	scanf("%f", &weight);	//	%f  -->获取用户输入的浮点数据   &weight-->  获取的数据赋值给 weight
	//假设白金的价格是美盎司1700$
	//14.5833用于把英镑常衡盎司转换为金衡盎司
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.3f.\n",value);
	printf("You are easily worth that ! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	getchar();
	getchar();
	return 0;
}
