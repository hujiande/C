#include<stdio.h>
int main()
{
	unsigned int un = 3000000000;//int Ϊ32λ��short Ϊ16λ��ϵͳ
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	printf("un = %u and not %d\n", un , un);
	printf("end = %hd and %d\n", end , end);
	printf("big = %ld and not %hd\n" ,big , big);
	printf("verbig = %lld and not %ld\n" , verybig , verybig);
	return 0;
}
