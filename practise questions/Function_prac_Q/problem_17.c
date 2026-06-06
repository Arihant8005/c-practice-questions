// Q. Using a function to copy one string into another

#include<stdio.h>
void copy(char str1[],char str2[]);
int main()
{
    char str1[] = "arihant";
    char str2[10];
    copy(str1,str2);
    return 0;
}
void copy(char str1[],char str2[])
{
    int i;
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("%s",str2);
}