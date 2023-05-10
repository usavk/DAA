#include <stdio.h>
int main() 
{
    int max=10, i, j, count ;
    for(i=2; i<=max; i++) 
	{
		count=0;
        for(j=1; j<i; j++) {
            if(i%j == 0) 
                count++;
            }
        if(count==1) 
        printf("%d\t ",i);
        }
}
