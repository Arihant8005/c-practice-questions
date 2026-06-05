#include<stdio.h>
int main()
{
    int i,a[6];
    printf("enter six number:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements you enter are:\n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
