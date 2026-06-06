// Q. Access array elements using pointer[dereferencing *(p+i)]

#include<stdio.h>
int main()
{
    int i,a[5]={1,2,3,4,5};
    int *p = a;
    for(i=0; i<5; i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\n%d",*(p+1));           //  p + 1 → address of arr[1]
    printf("\n%d",*(p+2));
    printf("%p\n",p);
    printf("%p",(p+1));      // printing address
}

