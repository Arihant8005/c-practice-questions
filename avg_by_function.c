#include<stdio.h>
int average(int,int,int);
int main()
{
    int a,b,c;
    float avg;
    printf("enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    avg = average(a,b,c);
    printf("avg=%.2f",avg);
    return 0;
}
int average(int a,int b,int c)
{
    float avg;
    avg=(a+b+c)/3;
    return avg;
}
