#include<stdio.h>
int main()
{
    int a[10];
    int i,positive=0,negative=0;
    printf("enter ten numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the 1D array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
        if(a[i]>=0)
          positive++;
        else
          negative++;
    }
    printf("number of positive numbers is %d\n",positive);
    printf("number of negative numbers is %d",negative);
    return 0;
}
