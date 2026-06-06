// Q. Q3. Create a structure Employee with ID and salary.
// Take input for 3 employees and print them

#include <stdio.h>
struct Employee
{
    int id;
    float salary;
};
int main()
{
    // struct Employee e[3]={{101,55000.50},{102,62000.75},{103,48000.00}}; directly assign value
    struct Employee e[3];     // array of structures
    for(int i=0; i<3; i++)
    {
        printf("Enter ID for employee %d: ", i+1);
        scanf("%d", &e[i].id);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\n--- Employee Details ---\n");
    for(int i=0; i<3; i++)
    {
        printf("ID: %d\nSalary: %.2f\n", e[i].id, e[i].salary);
    }
}
