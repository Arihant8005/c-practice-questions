#include<stdio.h>
#include<string.h>

int main(){
    char name[50];
    printf("Enter the string: ");
    scanf("%s",name);

    int start = 0;
    int end = strlen(name) - 1;

    int temp;

    while(start < end){
        temp = name[start];
        name[start] = name[end];
        name[end] = temp;

        start++;
        end--;
    }

    printf("reversed string: %s",name);
}