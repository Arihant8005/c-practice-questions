#include<stdio.h>
#include<math.h>
int power(int ,int );
int main()
{
    int b, e;
    printf("Enter the base and exponent:");
    scanf("%d%d",&b, &e);
    printf("%d",power(b,e));

}
int power(int b , int e)
{
    return(pow(b,e));
}