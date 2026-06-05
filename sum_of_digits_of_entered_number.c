#include<stdio.h>
int main()
{
    int num,rem,digit_sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        digit_sum=digit_sum+rem;
        num=num/10;
    }
    printf("sum of digits is %d",digit_sum);
    return 0;
}