#include<stdio.h>
void main(){
    int a=3,b=4,d=24;
    float c=3.00;
    // implicit converting (automatic)
    float e=a;
    int f=c;
    // explicit converting (non_automatic)
    float h=b/a;
    float j=(float)b/a;
    printf("%f %i %f %f",e,f,h,j);
}