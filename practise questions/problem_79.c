// Q. Take input using structure pointer (p->field).

#include<stdio.h>
struct Student
{
    char name[20];
    int roll_num;
};
int main()
{
    struct Student S;
    struct Student *p = &S;
    printf("Enter name:");
    scanf("%s",p->name);
    printf("Enter roll_num:");
    scanf("%d",&p->roll_num);
    printf("Name = %s\n",p->name);
    printf("Roll number = %d",p->roll_num);
}