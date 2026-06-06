// Q. Use static variable inside function

#include <stdio.h>
void counter();
int main()
{
    counter();
    counter();
    counter();
    return 0;
}
void counter()
{
    static int x = 0;   // retains value initiliaze only once
    x++;
    printf("%d ", x);   // if you remove static it prints 1 1 1
}

