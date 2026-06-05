#include<stdio.h>
int main()
{
    int a[5];
    int i,sum=0;
    printf("enter the five numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the number you enter are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}
