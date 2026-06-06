// Q. Use pointer to pointer (double pointer) to modify a variable inside a function.

#include<stdio.h>
void modify(int **q);    // using void because function is not return a value
int main()
{
    int i, x= 10;
    int *p = &x;
    // modify(&x or p); invalid — you cannot pass int*(pointer to int) to a function expecting int**
    modify(&p);  // correct — passes int**(pointer to pointer)
    printf("%d",x);
    return 0;
}
void modify(int **q)
{
    **q = 20;
}
