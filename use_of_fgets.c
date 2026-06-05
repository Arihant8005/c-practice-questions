//Take input using fgets() and print it

#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);   // read full line  //stdin tells fgets() where to read from.
    printf("You entered: %s", name);    //stdin → keyboard  //name → where the string will be stored
    return 0;
}