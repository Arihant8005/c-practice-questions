#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("Enter the string: ");
    scanf("%s",name);

    
    int start = 0;
    int end = strlen(name) - 1;
    int flag = 1;

    while (start < end) {
        if (name[start] != name[end]) {
            flag = 0;
            break;
    }
        start++;
        end--;
}

if (flag)
    printf("Palindrome");
else
    printf("Not Palindrome");
}