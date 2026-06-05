// Q. write a function to check a number is even or odd

#include<stdio.h>
void even_odd(int);
int main()
{
    int n = 20;
    even_odd(n);
    return 0;
}
void even_odd(int n)
{
    if(n % 2 == 0)
        printf("even");
    else
        printf("odd");
}
