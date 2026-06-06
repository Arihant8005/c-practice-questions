// Q. Write a program to compare two strings using pointers (like strcmp).

#include<stdio.h>
int main()
{
    char str1[] = "arihant";
    char str2[] = "kishan";
    char *p = str1;
    char *q = str2;

    for( ; *p != '\0' && *q != '\0'; p++, q++)  //initialization is empty (because pointers already initialized)
    {
        if(*p != *q)                     //loop continues until either string ends
            break;                      //p1++ → move to next character in str1
    }                                    //p2++ → move to next character in str2
    if(*p == *q)
        printf("Equal");

    else if(*p > *q)
        printf("string 1 is larger");

    else
        printf("string 1 is smaller");

}
// Direct comparing two strings
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[] = "gopi";
//     char str2[] = "gopi";
//     char str3[] = "goo";
//     char str4[] = "goooo";
//     printf("%d\n",strcmp(str1,str2));            //0 → both strings are equal
//     printf("%d\n",strcmp(str2,str3));            //> 0 → first string is larger
//     printf("%d\n",strcmp(str3,str4));            //< 0 → first string is smaller
// }
