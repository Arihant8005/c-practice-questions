// Q. Student structure: find highest marks among 3 students.

#include<stdio.h>
struct Student
{
    char name[20];
    int marks;
};
int main()
{
    struct Student S[3] = {{"Arihant",23},{"Kishan",45},{"Anuj",37}};
    int max = S[0].marks;
    for(int i=0; i<3; i++)
    {
        if(S[i].marks > max)
            max = S[i].marks;
    }
    for(int i=0; i<3; i++)
    {
        if(S[i].marks == max)
            printf("Topper : %s with marks %d",S[i].name,S[i].marks);
    }
    
}