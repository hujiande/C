#include <stdio.h>
//һ���ļ�������������
int butler(int i);	//����ԭ��(��������) ��֪�������ڳ�����Ҫʹ�øĺ���

int main(void)
{
	printf("I will summon the butler function.\n");
	int i;
	i = butler(1);	//��������
	printf("Yes ,Bring me some %d ten and Writeable DVDs.\n",i);
	return 0;
}

//�������忪ʼ
int butler(int i)
{
	printf("Your Range? Sir?\n");
	return i;
}
