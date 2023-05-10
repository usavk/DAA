#include<stdio.h>
#include<cmath>
int arm(int n)
{
	if(n==0)
	return 0;
	else
	{
		return (pow(n%10,3)+arm(n/10));
	}
}
int main()
{
	int n,a;
	printf("enter trhe number:");
	scanf("%d",&n);
	a=arm(n);
	if(a==n)
	{
		printf("its armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}
