// Q. function calling each other to peform a task or functin calling another function

#include <stdio.h>
void start();
void welcome();
void greet();
int main()
{
    start();   // calling start function
    return 0;
}
void start()
{
    printf("Program started.\n");
    welcome();  // calling welcome function
}
void welcome()
{
    printf("Welcome to the program.\n");
    greet();   // calling greet function
}
void greet()
{
    printf("Hello!\n");
}
