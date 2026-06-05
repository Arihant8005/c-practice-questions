#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the 1D array in reverse order is:\n");
    for(i=4;i>=0;i--)// prints in reverse order
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
