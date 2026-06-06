// Q. Use pointer to structure and  use (-> operator) to print details.

#include <stdio.h>
struct Student
{
    char name[20];
    int age;
};
int main()
{
    struct Student s = {"Aryan", 20};
    struct Student *p = &s;
    printf("Name: %s\n", p->name);// p->name means : go to the structure stored at address p, then access its member 'name'
    printf("Age: %d\n", p->age);
}