// Q. write a function to numbers from 1 to n
#include<stdio.h>
void printnum(int);
int main()
{
    int n = 50;
    printnum(n);
    return 0;
}
void printnum(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        printf("%d\t",i);
    }
}