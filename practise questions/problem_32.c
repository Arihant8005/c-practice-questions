// Q. Find the sum of all elements in an array using a pointer.

#include<stdio.h>
int main()
{
    int i, a[5] = {1,23,34,33,3};
    int *p = a;
    int sum = 0;
    for(i=0; i<5; i++)
    {
        sum += *(p + i);
    }
    printf("%d",sum);
}