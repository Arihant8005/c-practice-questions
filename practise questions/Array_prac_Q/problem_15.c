// Q. find the missing number in an array of "1 to n"
// Example Input: {1, 2, 4, 5} → Missing = 3

#include<stdio.h>
int main()
{
    int a[8]={1,2,3,5,4,7,8,9};
    int i,sum=0,total,missing_number;
    for(i=0; i<8; i++)
    {
        sum+=a[i];
    }
    total=9*(9+1)/2;
    missing_number=total-sum;
    printf("missing number=%d",missing_number);
}