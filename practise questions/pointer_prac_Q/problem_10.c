// Q. Swap two array elements using pointers (swap arr[1] and arr[2]).

#include<stdio.h>
int main()
{
    int i, a[5]={23,45,67,2,4};
    int *p = a;
    int  temp = *(p + 1);
        *(p + 1) = *(p + 2);
        *(p + 2) = temp;
    printf("after swap a[1] = %d\n",*(p + 1));
    printf("after swap a[2] = %d\n",*(p + 2));
    for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
}
 