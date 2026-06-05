// Q. Create structure Item with code and price.
// Store 5 items and print total price

#include<stdio.h>
struct Item
{
    int code;
    int price;
};
int main()
{
    struct Item I[5];
    int total = 0;
    for(int i=0; i<5; i++)
    {
        printf("Enter code of item %d:",i+1);
        scanf("%d",&I[i].code);
        printf("Enter price of item %d:",i+1);
        scanf("%d",&I[i].price);
        total += I[i].price;
    }
    printf("Total price of 5 items = %d",total);
}