#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two values to perform relational operation");
	scanf("%d%d",&a,&b);
	printf("%d>%d=%d\n",a,b,a>b);
	printf("%d<%d=%d\n",a,b,a<b);
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d>=%d=%d\n",a,b,a>=b);
	printf("%d<=%d=%d\n",a,b,a<=b);
	printf("NOTE:The result of above if\'1\' it is true and \'0\' it is false");
	return 0;
}
