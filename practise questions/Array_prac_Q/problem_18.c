// Q. print the element with max frequency

#include <stdio.h>
int main()
{
    int arr[9] = {2, 3, 2, 5, 3, 2, 7, 3, 3};
    int maxFreq = 0;
    int element = arr[0];
    for(int i = 0; i < 9; i++)
    {
        int count = 1;
        for(int j = i + 1; j < 9; j++)
        {
            if(arr[i] == arr[j])
                count++; 
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    }
    printf("Element with maximum frequency: %d\n", element);
    printf("Frequency: %d\n", maxFreq);
}
