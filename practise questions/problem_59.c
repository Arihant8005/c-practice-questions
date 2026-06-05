// Q. Passing 2D array to a function

#include<stdio.h>
void array_2d(int a[][3],int,int);
int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    array_2d(a,3,3);
    return 0;
}
void array_2d(int a[][3],int x,int y)
{
    int i,j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}