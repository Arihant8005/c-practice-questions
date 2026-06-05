#include<stdio.h>
int main()
{
    int a[2][3];
    int i,j;
    printf("enter elements for 2*3 array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {

            printf("enter element at position [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the 2D array is:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
    return 0;
}
