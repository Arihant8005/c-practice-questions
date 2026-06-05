// Q. Calculate the average of array using dynamic memory allocation (malloc).

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a[5];
    int sum = 0;
    float Avg;
    int *p = (int *)malloc(5 * sizeof(int));
    printf("Enter the array elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d",p+i);
    }
    for(i=0; i<5; i++)
    {
        sum += *(p+i);
        Avg = sum/5;
    }
    printf("%.2f",Avg);
    free(p);
}