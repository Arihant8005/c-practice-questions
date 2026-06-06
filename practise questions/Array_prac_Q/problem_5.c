// Q. count how many positive ,negavite and zero are there in an array

#include<stdio.h>
int main()
{
    int arr[10]={1,-2,-3,4,22,0,4,-10,0,-2939};
    int i;
    int positive=0,negative=0,zero=0;
    for(i=0; i<10; i++)
    {
        printf("%d\n",arr[i]);
        if(arr[i]>0)
            positive++;
        else if(arr[i]<0)
            negative++;
        else
            zero++;
    }
    printf("\npositive=%d",positive);
    printf("\nnegative=%d",negative);
    printf("\nzero=%d",zero);
    return 0;
}