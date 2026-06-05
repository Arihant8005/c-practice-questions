// Q. max value in an array using pointers

#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the array elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    int max = *p;
    for(i=1; i<5; i++)
    {
        if(*(p+i)>max)
        max=*(p+i);
    }
    printf("maximum value=%d",max);
    return 0;
}
