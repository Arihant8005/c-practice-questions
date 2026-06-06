// Q. Array of function pointers

#include<stdio.h>
int add(int,int);
int sub(int ,int);
int mult(int,int);
int div(int,int);
int main()
{
    int (*fp[4])(int,int); //= {add,sub,mult,div};// Each element of fp[] stores the address of a function
    fp[0] = add;
    fp[1] = sub;
    fp[2] = mult;
    fp[3] = div;
    printf("Add = %d\n",fp[0](10,22));
    printf("Sub = %d\n",fp[1](110,22));
    printf("Multiply = %d\n",fp[2](12,10));
    printf("Division = %d",fp[3](24,5));
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mult(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}