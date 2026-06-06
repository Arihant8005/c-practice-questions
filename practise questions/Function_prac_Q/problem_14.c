// Q. Write a program to show difference between local and global variables

#include <stdio.h>
void show();
int g = 10;   // global variable
int main()
{
    printf("Global g = %d\n", g);//Global variable accessible everywhere.
    show();
    return 0;
}
void show()
{
    int g = 5;   // local variable with same name
    printf("Local g = %d\n", g);//Local variable exists only inside function.
}

