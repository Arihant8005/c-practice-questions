// Q. Write a program to find the length of a string using pointer (no strlen).

#include<stdio.h>
int main()
{
    int i;                  //OR //char str[50];
    char str[] = "arihant";  // printf("enter the string:");  // a string can stored in the form of array
    char *p = str;           //scanf("%s", str);
    for(i=0; *p!='\0'; i++)
    {
        p++;
    }
    printf(" lenght = %d",i);
}
// without pointer

// #include <stdio.h>
// int main()
// {
//     char str[100];
//     int i;
//     printf("Enter a string: ");
//     scanf("%s", str);  // or use fgets
//     // i itself becomes the length
//     for(i = 0; str[i] != '\0'; i++);
//     printf("Length = %d", i);
//     return 0;
// }


// Direct printing length of a string

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[20];
//     printf("Enter the string:");
//     scanf("%s",str);
//     printf("length = %d",strlen(str));
// }