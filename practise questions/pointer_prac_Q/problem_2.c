// Q. Swap two numbers using pointer

#include<stdio.h>
int main()
{
    int n1,n2,temp;
    int *p=&n1;
    int *q=&n2;
    printf("Enter the value of n1 and n2:");
    scanf("%d%d",&n1,&n2);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swaping n1=%d and n2=%d",*p,*q);
    return 0;

}