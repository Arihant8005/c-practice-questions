// Q. Function that returns the index of an element

#include<stdio.h>
int idx(int a[],int,int);
int main()
{
    int a[5] = {1,22,4,5,6};
    int x,i;
    printf("Enter the number to find index:");
    scanf("%d",&x);
    i = idx(a,5,x);
    printf("index = %d",i);
    return 0;
}
int idx(int a[],int n,int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(x == a[i])
            return i;
    }
    return -1;  // not found
}