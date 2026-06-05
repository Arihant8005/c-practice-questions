#include<stdio.h>
int main()
{
    int salary,bonus;
    printf("enter the salary:");
    scanf("%d",&salary);
    if(salary>=5000)
        bonus=0.05*salary;
    else
        bonus=250;
        printf("%d\n",bonus);
        return 0;
}
