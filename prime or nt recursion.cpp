#include<stdio.h>
int prime(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,a;
	printf("enter the number:");
	scanf("%d",&n);
	a=prime(n);
	if(a==0)
	printf("prime");
	else
	printf("not");
}