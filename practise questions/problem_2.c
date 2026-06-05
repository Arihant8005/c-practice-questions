// // Q. Write a function to return square of a number

// #include<stdio.h>
// int sq(int);
// int main()
// {
//     int num;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     sq(num);
//     return 0;
// }
// int sq(int num)
// {
//     int sq;
//     sq = num*num;
//     printf("square = %d",sq);
// }

#include<stdio.h>
int sqr(int);
int main()
{
    printf("%d",sqr(14));

}
int sqr(int num)
{
    return(num * num);
}