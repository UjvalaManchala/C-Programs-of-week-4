#include<stdio.h>
int main()
{
	int a;
	printf("enter value of a");
	scanf("%d",&a);
	printf("%d++=%d\n",a,a++);
	printf("++%d=%d\n",a,++a);
	printf("%d--=%d\n",a,a--);
	printf("--%d=%d\n",a,--a);
	return 0;
}
