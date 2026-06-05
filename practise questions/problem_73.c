// Q. Compare two structures (check if two dates are equal).

#include <stdio.h>
struct Date
{
    int d, m, y;
};

int main()
{
    struct Date a = {1, 2, 2024};
    struct Date b = {1, 2, 2023};

    if(a.d == b.d && a.m == b.m && a.y == b.y)
        printf("Dates are same\n");
    else
        printf("Dates are different\n");
}
