// Q. Create structure Person with name and age.(take input of 3 person)
// Print senior citizen if age > 60

#include<stdio.h>
struct Person
{
    char name[30];
    int age;
};
int main()
{
    struct Person p[3];
    for(int i=0; i<3; i++)
    {
        printf("Enter name of person %d :",i+1);
        scanf("%s",p[i].name);
        printf("Enter age of %d :",i+1);
        scanf("%d",&p[i].age);
    }
    for(int i=0; i<3; i++)
    {
        if(p[i].age > 60)
            printf("%s is a senior citizen\n",p[i].name);
    }
}