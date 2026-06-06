// Q. Print the second largest number in array using pointer.

#include<stdio.h>
int main()
{
    int a[5] = {11,22,3,4,5};
    int i;
    int *p = a;
    int max1 = *p;
    int max2 = -9999;
    for(i=1; i<5; i++)
    {
        if(*(p + i) > max1)
        {
            max2 = max1;
            max1 = *(p + i);
        }
        else if(*(p + i) > max2)
        {
            max2 = *(p + i);
        }
    }
    printf("%d",max2);
    
}
