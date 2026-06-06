// Q. count the number of vowels in a string using function

#include<stdio.h>
void word(char str[]);
int main()
{
    char str[50];
    printf("Enter the word:");
    fgets(str,sizeof(str),stdin);  //  if we use scanf("%s",wd); this reads only a single string
    word(str);                    // but fgets(wd,sizeof(wd),stdin); reads the entire line
    return 0;
}
void word(char str[])
{
    char vowels[]="aeiouAEIOU";
    int count=0,i,j;
    for(i=0; str[i]!='\0'; i++)  // wd[i]!='\0' it means to continue the loop until the end of string
    {                           // because c does not store string length
        for(j=0; vowels[j]!='\0'; j++)
        {
            if(str[i]==vowels[j])
            {
                count++;
                break;
            }
        }
    }
    printf("vowels=%d",count);
}
        
    