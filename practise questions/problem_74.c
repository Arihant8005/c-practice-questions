// Q. Create typedef for Structure to shorten syntax.

#include <stdio.h>
typedef struct
{
    char name[20];
    int age;
} Person;
int main()
{
    Person p = {"Rahul", 25};
    printf("Name: %s\nAge: %d\n", p.name, p.age);
}