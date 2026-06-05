// Q. Write a program to dynamically allocate memory for 5 integers using malloc, take input, 
// and print them using pointers.

#include <stdio.h>
#include <stdlib.h>     // malloc and free

int main()
{                                             //(int *) means:
    printf("enter the number:");               //"Treat this pointer as a pointer to an integer."
    int *p = (int *)malloc(5 * sizeof(int));//We use it because:
                                             //malloc() returns a void * (unknown type)
                                            //We need to tell the compiler that it will store int
    for(int i=0; i<5; i++)
    {                                    //malloc(5 * sizeof(int))
          scanf("%d", (p + i));         //sizeof(int) = size of one integer in bytes (usually 4 bytes)
                                        //5 * sizeof(int) = space for 5 integers (5 × 4 = 20 bytes)
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);//free(p);
// The dynamically allocated memory is released.
// Prevents memory leak.
// After this, p becomes invalid (dangling pointer).
}
