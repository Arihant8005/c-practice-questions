// Q. short the array

#include <stdio.h>
int main()
{
    int arr[5] = {5, 3, 1, 4, 2};
    int i, j, temp;

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] > arr[j])// compare with next elements
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i=0; i<5; i++)
        printf("%d ", arr[i]);

    return 0;
}
