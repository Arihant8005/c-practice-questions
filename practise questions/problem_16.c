// Q. Rotate array elements to the left by 1 position.

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int first=a[0];
    for(i=0; i<4; i++)
    {
        a[i]=a[i+1];
    }
    a[4]=first;
    for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
}    //return 0 in modern times is not necessary to write because compailer automatically assumes it