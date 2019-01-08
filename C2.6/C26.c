#include <stdio.h>
//一个文件包含两个函数
int butler(int i);	//函数原型(函数声明) 告知编译器在程序中要使用改函数

int main(void)
{
	printf("I will summon the butler function.\n");
	int i;
	i = butler(1);	//函数调用
	printf("Yes ,Bring me some %d ten and Writeable DVDs.\n",i);
	return 0;
}

//函数定义开始
int butler(int i)
{
	printf("Your Range? Sir?\n");
	return i;
}
