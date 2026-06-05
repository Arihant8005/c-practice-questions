// Find all pairs in an array whose sum is equal to a given number.
// Example: sum = 7 → (2,5), (3,4)

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,11};
    int i ,j,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)  //j = i + 1 means "start pairing from the next element",
        {                      //so every pair is formed once without repetition.
            if(a[i]+a[j]==7)
            {
                printf("(%d,%d)",a[i],a[j]);
            }
        }
    }
}