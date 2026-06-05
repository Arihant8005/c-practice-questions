// Q. Rotate array elements to the right by 1 position.

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int last=a[4];
    for(i=4; i>0; i--)
    {
        a[i]=a[i-1]; // it prevents the overwrite of values at non empty place. Always starts from empty place
    }
    a[0]=last;
    for(i=0; i<5; i++)
    {
        printf("%d",a[i]);
    }
}
