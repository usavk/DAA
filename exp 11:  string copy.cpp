#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    int i,len;
    len=sizeof(str1);
    printf("Enter the string 1: ");
    gets(str1);
    strcpy(str2, str1);
    printf("\nString 2 = %s", str2);
    printf("\nString 2 = %s", str2);
    getch();
    return 0;
}
