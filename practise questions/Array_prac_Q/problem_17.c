// Q. convert the 1D array into 3*3 matrix

#include <stdio.h>
int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int matrix[3][3];
    int k = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            matrix[i][j] = arr[k];
            k++;
        }
    }
    printf("Matrix:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
