// Q. Create a structure named Student with members: name, roll, marks.
// Take input for one student and print the details.
#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    int marks;
};
int main()
{
    struct student s1;
    printf("Enter name:");
    scanf("%s",s1.name);
    printf("Enter roll number:");
    scanf("%d",&s1.roll);
    printf("Enter marks:");
    scanf("%d",&s1.marks);
    printf("----Student details----\n");
    printf("Name = %s\n",s1.name);            // Member Access Operator ( . )
    printf("Roll number = %d\n",s1.roll);
    printf("Marks = %d\n",s1.marks);
}