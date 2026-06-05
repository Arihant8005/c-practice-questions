// Q. Write a function to add two numbers (without return, with parameters)

#include<stdio.h>
void add(int,int); // we write void in place of int because we are not returning a value
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int a,int b)
{
    int sum;
    sum = a+b;
    printf("%d",sum);
}