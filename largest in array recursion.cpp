#include<stdio.h>
#define MAX 100
int Element(int []);
int size;

int main()
{
    int arr[MAX], max, i;
    printf("\n\nEnter the size of the array: ");
    scanf("%d", &size);
    printf("\n\nEnter %d elements\n\n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = Element(arr);  
    printf("\n\nLargest element of the array is %d\n\n", max);
    return 0;
}

int Element(int a[])
{
    static int i = 0, max =a[0];
    if(i < size) 
    {
        if(max < a[i])
        max = a[i];
        i++;    
        Element(a);   
    }
    return max;
}