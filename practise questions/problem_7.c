// Q. liner search of elements in an array

#include<stdio.h>
int main()
{
    int arr[5]={2,45,67,3,5};
    int i,num;
    printf("Enter the number to search:");
    scanf("%d",&num);
    for(i=0; i<5; i++)
    {
        if(arr[i]==num)
        {
            printf("number found");
            printf("\nit is found at index %d",i);
            break;
        }
        else if(i == 4)   // last iteration and still not found
        {
            printf("Invalid input (number not found)");
        }
    }
    return 0;
    
}
