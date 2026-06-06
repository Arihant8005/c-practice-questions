// Q. Write a program to concatenate (add) two strings using pointers.

#include<stdio.h>
int main()
{
    char str1[20] = "arihant";
    char str2[20] = "rathore";
    char *p = str1;
    char *q = str2;
    for( ; *p != '\0'; p++);//p starts at the beginning of "arihant"and moves until it reaches the '\0'
    for( ; *q != '\0'; q++,p++)//This copies each character from "rathore" into str1, starting where "arihant" ends.
        *p = *q;
    *p = '\0';  //“This is the end of the string.”
    
    printf("%s",str1);
}
// Directing add two strings
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[] = "arihant";
//     char str2[] = "rathore";
//     printf("%s",strcat(str1,str2));
// }

//Without pointers
// #include<stdio.h>
// int main(){
//     int i;
//     char str1[20] = "Arihant";
//     char str2[20] = "Rathore";
//     for( i = 0; str1[i] != '\0'; i++);
//     for(int j = 0; str2[j] != '\0'; j++,i++){
//         str1[i] = str2[j];
//     }
//     str1[i] = '\0';
//     printf("%s",str1);
// }