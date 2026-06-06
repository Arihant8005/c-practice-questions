// Q. Write a function to check if a number is prime

#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int i,count = 0;
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
            count++;
    }
    if(count == 2)
        printf("Prime");
    else
        printf("Not prime");
}