// print the series 1,4,9,....n^2
#include<stdio.h>
int main(){
    int N, a = 1;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(int i = 2; i <= N + 1; i++){
        printf("%d\t",a);
        a = i*i;
    }
}