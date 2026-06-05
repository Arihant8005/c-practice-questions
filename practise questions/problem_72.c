// Q. Create structure Employee and pass structure to a function to print details.

#include<stdio.h>
struct Employee
{
    char name[20];
    int ID;
};
void details(struct Employee); // struct Employee is a datatype
int main()
{
    struct Employee E;
    printf("Enter the name of employee:");
    scanf("%s",E.name);
    printf("Enter the Id of employee:");
    scanf("%d",&E.ID);
    details(E);
    return 0;
}
void details(struct Employee E)
{
    printf("%s\n",E.name);
    printf("%d",E.ID);
}