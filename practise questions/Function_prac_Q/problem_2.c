// Q.  pass by value question

#include<stdio.h>
int change(int);
int main()
{
    int x = 10;
    printf("before function call: x=%d\n",x);
    change(x);
    printf("after function call: x=%d",x);
    return 0;
}
int change(int x)
{
    x=20;  // this only modify the copy of x. original value remains the same
}
