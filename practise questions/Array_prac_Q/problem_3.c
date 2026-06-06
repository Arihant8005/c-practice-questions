// Q. count frequency of element

#include<stdio.h>
int main()
{
    int arr[20]={2,3,4,2,3,5,5,6,66,6,7,4,4,5,4,3,22,3,3,0};
    int i,num,count=0;
    printf("Enter the element:");
    scanf("%d",&num);
    for(i=0; i<20; i++)
    {
        if(num==arr[i])
        {
            count++;
        }
    }
    printf("frequency=%d",count);
    return 0;
}