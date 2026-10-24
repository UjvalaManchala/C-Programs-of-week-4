#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,mod;
	float div;
	printf("enter two values to perform arithmatic operations");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float)(a/b);
	printf("sum=%d\nsubtraction=%d\nproduct=%d\nremainder=%d\n",add,sub,mul,mod);
	printf("division=%f\n",div);
	return 0;
}
