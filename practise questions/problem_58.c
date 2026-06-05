// Q. Function pointer demonstration

#include <stdio.h>
void sum(int,int);
int main()
{
    void (*fp)(int, int);   // function pointer that accepts two ints
    fp = sum;   // store function address in pointer
    fp(10, 20); // calling function using pointer
    fp(5, 7);   // calling again with different values
    return 0;
}

void sum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

//  By return value

// #include <stdio.h>e
// int multiply(int, int);
// int main()
// {
//     int (*fp)(int, int);   // function pointer returning int
//     fp = multiply;   // assign function address
//     int result1 = fp(5, 4);   // call through pointer
//     int result2 = fp(7, 3);
//     printf("Result 1 = %d\n", result1);
//     printf("Result 2 = %d\n", result2);
//     return 0;
// }
// int multiply(int a, int b)
// {
//     return a * b;
// }

//without passing values

// #include <stdio.h>
// void hello();
// int main()
// {
//     void (*fp)();   // function pointer
//     fp = hello;
//     fp();   // calling function using pointer
//     return 0;
// }
// void hello()
// {
//     printf("Hello from function pointer!\n");
// }