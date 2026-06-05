#include<stdio.h>
int USD(int);
int main()
{
    int usd;
    printf("enter the value of us dollar:");
    scanf("%d",&usd);
    USD(usd);
    return 0;
}
int USD(int usd)
{
    int INR;
    INR = usd * 83;
    printf("INR=%d",INR);
}

// #include<stdio.h>
// int main()
// {
//     int USD;
//     printf("Enter the value of USD:");
//     scanf("%d",&USD);
//     float INR = USD * 95.6;
//     printf("%.2f",INR);
// }