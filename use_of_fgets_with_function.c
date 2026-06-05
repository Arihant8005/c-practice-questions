#include <stdio.h>
void printString(char str[]);//A string in C = array of characters,so it must be: char str[] not char.
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // accepts spaces also
    printString(str);
    return 0;
}
void printString(char str[])           //In main → variable is name
{                                     //Inside function → variable becomes str
    printf("You entered: %s", str);  //NOT name, because name does not exist inside the function.
}

// Undrstand this:
// char* getName()
// {
//     return "arihant";
// }

// Here:
// The function gives back a string → so return type = char*

// void → returns nothing
// int → returns whole number
// float/double → return decimal
// char → returns single character
// char[] or char* → returns string