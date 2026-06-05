// Q. Write a function to find the largest number in array

#include<stdio.h>
void large_num(int a[],int);
int main()
{
    int i, a[5];
    printf("Enter the array elemnets:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    large_num(a,5);
    return 0;
}
void large_num(int a[],int n)
{
    int i,max;
    max = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    printf("largest = %d",max);
}