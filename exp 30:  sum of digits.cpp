//sum of digits using recursion
#include<stdio.h>
int sum(int n)
{
	int i;
	if(n>0)
	{
		return (sum(n/10)+n%10);
	}
}
int main()
{
	int n,a;
	printf("enter the number:");
	scanf("%d",&n);
	a=sum(n);
	printf("%d",a);
	return 0;
}
