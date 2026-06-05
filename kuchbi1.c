#include<stdio.h>
#include<stdlib.h>

struct car
{
    int engine_cc;
    float torque;
    float safety_rating;
    int price;
    char brand[10];
    float mileage;
};

int main()
{
    struct car arr[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Please enter the brand of the car at index %d: ", (i+1));
        scanf("%s", arr[i].brand);

        printf("Please enter the engine cc of the car at index %d: ", (i+1));
        scanf("%d", &arr[i].engine_cc);
        
        printf("Please enter the torque of the car at index %d: ", (i+1));
        scanf("%f", &arr[i].torque);

        printf("Please enter the safety rating of the car at index %d: ", (i+1));
        scanf("%f", &arr[i].safety_rating);

        printf("Please enter the price of the car at index %d: ", (i+1));
        scanf("%d", &arr[i].price);

        printf("Please enter the mileage of the car at index %d: ", (i+1));
        scanf("%f", &arr[i].mileage);

        printf("\n"); 
    }

    return 0;
}
