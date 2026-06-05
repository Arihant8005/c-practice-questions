// Q. Write a function to reverse a string

#include<stdio.h> 
int main()
{
    char str[10];
    int i, j, temp;
    printf("Enter the string: ");
    scanf("%s", str);   // read string once
    for(i = 0; str[i] != '\0'; i++);// find length i.e  " i = 7 " 
    j = i - 1;    // set j to last index
    i = 0;//Start from beginning

    // reverse like array
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    printf("Reverse string = %s", str);
    return 0;
}

// Direct way
// #include<stdio.h>
// #include<string.h>
// void rev_str(char str[]);
// int main()
// {
//     char str[] = "arihant";
//     rev_str(str);
//     return 0;
// }
// void rev_str(char str[])
// {
//     printf("%s",strrev(str));
// }

//Alternate code
// #include <stdio.h>
// char *str_rev(char str[]) {
//     int i, j;
//     char temp;

//     for (i = 0; str[i] != '\0'; i++);
//     for (j = 0, i = i - 1; j < i; j++, i--) {
//         temp = str[j];
//         str[j] = str[i];
//         str[i] = temp;
//     }
//     return str;
// }
// int main() {
//     char str[] = "Arihant";
//     printf("%s\n", str_rev(str));
//     return 0;
// }