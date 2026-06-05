// Q. print elements divisible by five

#include<stdio.h>
int main()
{
    int a[7]={12,15,5,100,3,777,2025};
    int i;
    for(i=0; i<7; i++)
    {
        if(a[i]%5==0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}

 