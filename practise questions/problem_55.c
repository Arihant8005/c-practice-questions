// Q. Passing an array to a function and modifying it

#include<stdio.h>
void passing(int a[],int);
int main()
{
    int a[5] = {1,2,3,4,5};
    passing(a,5);
    return 0;
}
void passing(int a[],int n)
{
    int i;
    int first = a[0];
    for(i=1; i<=4; i++)
    {
        a[i-1] = a[i]; 
    }
    a[4] = first;
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }

}