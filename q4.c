#include<stdio.h>
#include<stdlib.h>
void main(){
    float a;
    printf("Enter floating number:\n");
    scanf("%f",&a);
    a=abs(a);
    printf("Absolute value of input number is: %f",a);
}