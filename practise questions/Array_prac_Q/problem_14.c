// Q. Delete an element from a specific position.

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5};
    int i,n=5,pos=3,element=3;
    for(i=pos-1; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

}