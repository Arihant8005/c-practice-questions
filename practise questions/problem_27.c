// Q. Pointer arithmetic (increment)

#include<stdio.h>
int main()
{
    int a[3]={10,20,30};
    int *p = a;

    printf("%d\n",*p);     //Pointer increments by size of data type (4 bytes for int).
    p++; // try p+=2       //So p++ moves to next array element.
    printf("%d\n",*p);

}