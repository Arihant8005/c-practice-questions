#include<stdio.h>
int main()
{
    char op;
    int a,b,res;
    printf("enter the operation (+,-,*,/):");
    scanf("%c",&op);
    printf("enter the operands:");
    scanf("%d%d%d",&a,&b,&res);
    switch(op)
    {
    case'+':
        res=a+b;
        break;
    case'-':
        res=a-b;
        break;
    case'*':
        res=a*b;
        break;
    case'/':
        res=a/b;
        break;
    default:
        printf("invalid input.enter the operation between (=,-,*,/)");
    }
    return 0;
}
