// Q. Change variable value using pointer

#include <stdio.h>
int main()
{
    int x = 5;
    int *p = &x;
    *p = 50;  // changes x
    printf("New value of x = %d\n", x);
    printf("New value of x = %d", *p);  // both are same
}
