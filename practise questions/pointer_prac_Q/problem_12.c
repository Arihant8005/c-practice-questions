// Q. Explain pointer to constant with a program (value cannot be changed by pointer).

#include <stdio.h>
int main() {
    int x = 10;
    const int *p = &x;  // value cannot be changed

    // *p = 50; cannot be done

    printf("%d", *p);
}