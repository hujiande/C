/*打印类型大小*/
#include<stdio.h>
int main(void)
{
	/* C99为类型大小提供%zd转换说明 */
	printf("Type int has a size of %zd bytes.\n",sizeof(int));
	printf("Type int has a size of %zd bytes.\n",sizeof(char));
	printf("Type int has a size of %zd bytes.\n",sizeof(long));
	printf("Type int has a size of %zd bytes.\n",sizeof(long long));
	printf("Type int has a size of %zd bytes.\n",sizeof(double));
	printf("Type int has a size of %zd bytes.\n",sizeof(long double));
	printf("Type int has a size of %zd bytes.\n",sizeof(long int));
	return 0;
}
