// Q. Create structure Marks with 3 subjects.
// Print total and percentage

#include<stdio.h>
struct Marks
{
    int marks;
};
int main()
{
    struct Marks M[3];
    int total = 0;
    for(int i=0; i<3; i++)
    {
        printf("Enter marks of subject %d:",i+1);
        scanf("%d",&M[i].marks);
        total += M[i].marks;
    }
    float per;
    per = (total/300.0) * 100;     //   total / 300 will do integer division.
    printf("Total marks = %d\n",total);// 250 / 300 = 0 (because integer division → decimals removed)
    printf("Percentage = %.2f",per);
}
