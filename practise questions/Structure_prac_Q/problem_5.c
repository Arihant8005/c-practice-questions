// Q. Create a structure Rectangle with length and width.
// Calculate and print area

#include<stdio.h>
struct Rectangle
{
    int length;
    int width;
};
int main()
{
    int area;
    struct Rectangle r;
    printf("Enter the length :");
    scanf("%d",&r.length);
    printf("Enter the width:");
    scanf("%d",&r.width);
    area = r.length * r.width;
    printf("Area = %d",area);
}