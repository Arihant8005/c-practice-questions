#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i = 1; i <= 10; i++){
        printf("%d\n",num * i);
    }
}
// #include<stdio.h>
// int main()
// {                             // for reverse table
//     int n,i=1,table;         // i=10
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     while(i<=10)             // i>=1
//     {
//         table=n*i;
//         i++;                 // i--
//         printf("%d\n",table);
//     }
//     return 0;
// }