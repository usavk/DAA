int length(char *str,int i)
{
    if(str[i]=='\0')
     return i;
    length(str,++i);
	
}
#include<stdio.h>
int main()
{
    char str[50];  
    int find;
	printf("Enter The String To Find Length: ");
    gets(str);
    find=length(str,0);
    printf("Length Of The Given String Is'%s'= %d",str,find);
 
    return 0;
}