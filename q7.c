#include<stdio.h>
void main(){
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if(a%4==0){
        printf("It is a leap year.");
    }
    else{
        printf("Not a leap year");
    }
}