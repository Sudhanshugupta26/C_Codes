#include<stdio.h>
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    (a%2==0)?printf("It is even number"):printf("It is odd number");
}