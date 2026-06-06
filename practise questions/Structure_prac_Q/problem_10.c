// Q. Create a structure Address inside structure Student (nested structure)

#include<stdio.h>
struct Student
{
    struct Address
    {
        char name[30];
        char city[10];
    };

    int pincode;
    struct Address add;  // struct Address → This is the datatype // add → This is the variable name
};
int main()
{
//     directly initialization of value. Should be in proper order
//     struct Student s = {
//     302012,                        // int pincode 
//     {"Arihant", "Jaipur"}          // char name[30]  //struct Address add
// };                                 // char city[10]

    struct Student s;
    printf("Enter name:");
    scanf("%s",s.add.name);
    printf("Enter city:");
    scanf("%s",s.add.city);
    printf("Enter pincode:");
    scanf("%d",&s.pincode);
    printf("Name = %s\n",s.add.name);
    printf("City = %s\n",s.add.city);
    printf("Pincode = %d",s.pincode);
}