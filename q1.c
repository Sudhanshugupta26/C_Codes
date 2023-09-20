#include<stdio.h>
void main(){
    float a,b,c;
    printf("enter principal amount, time, rate of interest:\n ");
    scanf("%f %f %f",&a,&b,&c);
    printf("Simple Interest is: %f ",(a*b*c/100));
}