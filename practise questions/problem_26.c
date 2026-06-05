// Q. pointer to another pointer(double pointer)

#include<stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    int **q = &p;
    printf("%d\n",**q);
    printf("%d\n",*p);
    printf("%p\n",&p);
    printf("%p\n",p);
    printf("%p\n",&x);
}