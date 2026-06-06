// Q. take 5 numbers and prints the unique element

#include <stdio.h>
int main()
{
    int arr[7] = {2,3,2,5,3,7,9};
    printf("Unique:\n");
    for(int i = 0; i < 7; i++)
    {
        int count = 0;  // how many times arr[i] appears and it is written inside so that
                        //this resets for each arr[i]
        for(int j = 0; j < 7; j++)//For each element arr[i], the inner loop compares it to every 
        {                          //other element and counts how many times it appears.
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}
