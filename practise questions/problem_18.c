// Q. insert a number at a given position in an array

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5};
    int i,n=5,pos=3,value=88;  // n stores the current number of valid elements in the array.
    for(i=n; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=value;
    n++;                     // n = 6
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
