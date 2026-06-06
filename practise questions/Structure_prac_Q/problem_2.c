// Q. Q2. Create a structure Book with members: title, author, price.
// Assign values directly (no input) and print them.

#include<stdio.h>
struct Book
{
    char title[30];
    char author[10];
    int price;
};
int main()
{
    struct Book b = {"tarzen the wounder car","mukesh",1230};
    printf("Title = %s\n",b.title);
    printf("Author = %s\n",b.author);
    printf("price = %d",b.price);
}