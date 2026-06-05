// Q. Write a program to count and print how many even numbers are in an array using pointer.

#include<stdio.h>
int main()
{
    int i, a[7] = {23,34,45,56,67,78,90};
    int *p = a;
    int even = 0,odd = 0;
    for(i=0; i<7; i++)
    {
        if(*(p + i) % 2 == 0)
        {
            even++;
            printf("%d\t",*(p + i));
        }
        else
        {
            odd++;
            printf("\n%d\t",*(p + i));
        }
    }
    printf("\nEven = %d\n",even);
    printf("Odd = %d\n",odd);
}