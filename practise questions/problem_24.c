// Q. Basic pointer: store & print address and value

#include<stdio.h>
int main()
{
    int x = 10;
    int *p = &x;

    printf("Address=%p\n",p);     // %p is ONLY for printing the address stored in a pointer.
    printf("Address=%p\n",&x); 
    // printf("Address=%u\n",p);   do not use this
    printf("value=%d\n",x); 
    printf("Value=%d\n", *p);  // prints value stored at that address
}
    