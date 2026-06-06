// Q. Write a program to print an array in reverse order using pointer decrement.

#include<stdio.h>
int main()
{
    int i, a[5] = {1,2,3,4,5};
    int *p = a + 4;            // start from last element
    for(i=4; i>=0; i--)
    {
        printf("%d\n",*p);       // no use of i at all only for inilitalization
        p--;
    }
}