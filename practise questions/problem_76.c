// Q. Copy one structure to another (simple assignment).

#include<stdio.h>
struct Student
{
    char name[10];
    int roll_num;
};
int main()
{
    struct Student S[3] = {{"ariahnt",1} ,{"gopi",2} ,{"kishan",3}};
    struct Student C[3];
    for(int i=0; i<3; i++)
    {
        C[i] = S[i];
    }
    for(int i=0; i<3; i++)
    {
        printf(" %s,%d\n",C[i].name,C[i].roll_num);
    }
}