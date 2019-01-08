#include<stdio.h>
#include<string.h>/* 提供strlen()函数的原型 */
#define PRAISE "You are an extrarodinary being."
int main(void)
{
	// 如果编译器不识别%zd，尝试换成%u或%lu。
	char name[40];
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s.%s\n",name,PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);
	printf("The phrase of praise has %zd letters and occupies %zd memory cells.\n",strlen(PRAISE),sizeof PRAISE);
	return 0;
}
