#include<stdio.h>
#include<string.h>/* �ṩstrlen()������ԭ�� */
#define PRAISE "You are an extrarodinary being."
int main(void)
{
	// �����������ʶ��%zd�����Ի���%u��%lu��
	char name[40];
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s.%s\n",name,PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);
	printf("The phrase of praise has %zd letters and occupies %zd memory cells.\n",strlen(PRAISE),sizeof PRAISE);
	return 0;
}
