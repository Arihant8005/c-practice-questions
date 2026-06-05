#include<stdio.h>
int main()
{
    int count=0,i,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
            count+=1;
    }
    if(count==2)
        printf("prime number");
    else
        printf("Not a prime number");
    
    return 0;
}