#include<stdio.h>
int GCD(int,int);
int main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    GCD(num1,num2);
    return 0;
}
int GCD(int num1,int num2)
{
    int temp,remainder=0;
    if(num2>num1)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }
    while(num2!=0)
    {
       remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    printf("GCD=%d",num1);
}
