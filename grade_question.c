#include<stdio.h>
int main()
{
    int percentage;
    printf("enter the value of percentage:");
    scanf("%d",&percentage);
    if(percentage>=91)
        printf("grade O");
    else if(percentage>=81)
        printf("grade E");
    else if(percentage>=71)
        printf("grade A");
    else if(percentage>=61)
        printf("grade B");
    else if(percentage>=51)
        printf("grade C");
    else if(percentage<=50)
        printf("grade F");
    return 0;
}
