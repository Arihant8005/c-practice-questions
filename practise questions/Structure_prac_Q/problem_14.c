// Q. . Array of nested structures (Student having Address).

#include <stdio.h>
struct Student
{
    struct Address
    {
        char city[20];
    };

    char name[20];
    struct Address a;
};
int main()
{
    struct Student s[2];
    for(int i=0; i<2; i++)
    {
        printf("Enter name and city: ");
        scanf("%s %s", s[i].name, s[i].a.city);
    }
    printf("\n--- Students ---\n");
    for(int i=0; i<2; i++)
        printf("%s from %s\n", s[i].name, s[i].a.city);

}