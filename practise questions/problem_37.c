// Q. short the array using pointers

#include<stdio.h>
int main()
{
    int a[5] = {23,34,2,1,44};
    int i,j,temp;
    int *p = a;
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(*(p+i) > *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    printf("shorted array:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t",*(p + i));
    }
}
