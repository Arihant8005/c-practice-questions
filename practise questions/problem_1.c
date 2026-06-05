//  Q. Find maximum element in an array

#include<stdio.h>
int main()
{
    int i, max, a[5] = {3,7,4,2,9};
    a[0]=max;
    for(i=0; i<5; i++)
    {
        if(a[i]>a[0])
            max = a[i];
    }
    printf("maximum value is %d",max);
    return 0;

}