// Q. find second max,min in an array

#include<stdio.h>
int main()
{
    int a[5]={10,20,33,29,1};
    int i,max1,max2,min1,min2;
    max1=min1=a[0];
    max2=-9999,min2=9999; // here 9999 denotes infinity
    for(i=0; i<5; i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
            max2=a[i];

        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2)
            min2=a[i];
    }
    printf("2nd largest element=%d",max2);
    printf("\n2nd smallest element=%d",min2);
    return 0;
}
