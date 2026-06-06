//Q. merge two arrays

#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int b[4]={4,5,6,7};
    int c[7];
    int i;
    for(i=0; i<3; i++)      // {} this brackets are only used when there are more than one statement
    {
        c[i]=a[i];
    }
    for(i=0; i<4; i++)
    {
        c[i+3]=b[i];
    }
    for(i=0; i<7; i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int a[10] = {1, 2, 3 , 4, 5};
//     int b[3] = {-1, -2, -3};
//     for(int i = 0; i < 5; i++){
//         a[i + 5] = b[i];
//     }
//     printf("Array elements = ");
//     for(int i = 0; i < 8; i++){
//         printf("%d\t",a[i]);
//     }

// }