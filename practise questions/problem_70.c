// Q. Create structure Date with day, month, year.
// Print in DD/MM/YYYY format

#include<stdio.h>
struct Data
{
    int day,month,year;
};
int main()
{
    struct Data D;
    printf("Enter day:");
    scanf("%d",&D.day);
    printf("Enter month:");
    scanf("%d",&D.month);
    printf("Enter year:");
    scanf("%d",&D.year);
    printf(" Date = %d/%d/%d",D.day,D.month,D.year);
}
// Directly giving input
// #include <stdio.h>
// struct Date
// {
//     int d, m, y;
// };
// int main()
// {
//     struct Date D = {18, 12, 2025};
//     printf("Date = %02d/%02d/%d\n", D.d, D.m, D.y);
// }                      %02d means:
//                Print the integer in 2 digits. If it has only 1 digit, add a leading zero.
