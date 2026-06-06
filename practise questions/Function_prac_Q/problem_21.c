// Q. Function that returns multiple values using pointers

#include <stdio.h>
void calc(int,int,int *sum,int *diff);
int main()
{
    int s, d;           // will store returned values
    calc(10, 3, &s, &d);
    printf("Sum = %d\nDifference = %d", s, d);
    return 0;
}
void calc(int a, int b, int *sum, int *diff)
{
    *sum = a + b;     // store value at address of sum
    *diff = a - b;    // store value at address of product
}