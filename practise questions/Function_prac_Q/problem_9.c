// Q. Write a function to return the sum of array elements

#include<stdio.h>
int array_sum(int a[],int);
int main()
{
    int a[5];
    int i, result;
    printf("Enter the array elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements:\n");
    result = array_sum(a,5);
    printf("\nsum = %d",result);
    return 0;
}
int array_sum(int a[], int n)
{
    int i,sum = 0;
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
        sum += a[i];
    }
    return sum;
}