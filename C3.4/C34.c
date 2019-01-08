#include<stdio.h>
int main()
{
	/*
	long int estine;
	long johns;
	short int erns;
	short ribs;
	unsigned int s_count;
	unsigned players;
	unsigned long headcount;
	unsigned short yesvotes;
	long long age;
	*/
	//超出系统允许的最大 int 值
	int i = 2147483647;
	unsigned int  j = 4294967295;
	printf("%d %d %d\n", i , i +1 , i + 2);
	printf("%u %u %u\n",j , j + 1 , j + 2);

}
