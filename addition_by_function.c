#include<stdio.h>
int add(int,int);     // function declaration  // we are using int because we are returning a value.
int main()
{
    int sum,n1=10,n2=20;
    sum=add(n1,n2);      // function call
    printf("sum=%d",sum);
    return 0;
}
int add(int a,int b)           // function defination
{
    return (a+b);
}
