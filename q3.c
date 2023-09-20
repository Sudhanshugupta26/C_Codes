#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,h;
    double a_o_t;
    printf("Enter sides of triangle: \n");
    scanf("%f %f %f",&a,&b,&c);
    h=(a+b+c)/2;
    a_o_t=((h*(h-a)*(h-b)*(h-c)));
    a_o_t=pow(a_o_t,(0.5));
    printf("Area of triangle is: %lf",a_o_t);

}