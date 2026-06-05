// Q. copy element of one array into another array

#include<stdio.h>
int main()
{
    int i,a[5]={1,2,3,4,5};
    int b[5];
    for(i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    printf("copied array:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;

}