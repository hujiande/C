#include <stdio.h>
int main()
{
	float weight;	//�������
	float value;		//������صİ׽��ֵ
	printf("Are you worth your weight in platinum?\n");
	printf("let's check it out.\n");
	printf("Please enter your weight in pounds :  ");	//pounds  Ӣ��
	//��ȡ�û�������
	scanf("%f", &weight);	//	%f  -->��ȡ�û�����ĸ�������   &weight-->  ��ȡ�����ݸ�ֵ�� weight
	//����׽�ļ۸�������˾1700$
	//14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.3f.\n",value);
	printf("You are easily worth that ! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	getchar();
	getchar();
	return 0;
}
