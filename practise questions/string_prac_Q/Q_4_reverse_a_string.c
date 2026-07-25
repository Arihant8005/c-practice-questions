//reverse a string without strlen function

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);  // or use fgets
    // i itself becomes the length
    for(i = 0; str[i] != '\0'; i++);
    printf("Length = %d", i);
    return 0;
}