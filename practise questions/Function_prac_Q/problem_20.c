// Q. Function to convert lowercase string to uppercase

#include <stdio.h>
void upper(char s[]);
int main()
{
    char s[] = "arihant";
    upper(s);
    printf("%s", s);
    return 0;
}
void upper(char s[])
{
    for(int i=0; s[i] != '\0'; i++)
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;//Subtracting 32 converts lowercase to uppercase.
            //In ASCII, uppercase letters are 32 positions before lowercase.example:'a'=97,'A'=65
}                      // to conver to upper to lower add 32