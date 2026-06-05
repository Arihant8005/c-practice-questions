#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
int factorial(int n) 
{
    int i=1,fact=1;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("fact=%d",fact);
    return fact;
}
