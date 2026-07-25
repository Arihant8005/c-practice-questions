#include <stdio.h>
#include <string.h>

void word(char str[]);

int main()
{
    char str[50];
    printf("Enter the word: ");
    fgets(str, sizeof(str), stdin);

    word(str);

    return 0;
}

void word(char str[])
{
    char vowels[] = "aeiouAEIOU";
    int count = 0;
    int consonant = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            int flag = 0;

            for(int j = 0; vowels[j] != '\0'; j++)
            {
                if(str[i] == vowels[j])
                {
                    count++;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                consonant++;
        }
    }

    printf("Vowels = %d\n", count);
    printf("Consonants = %d\n", consonant);
}