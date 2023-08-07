#include<stdio.h>
#include<stdlib.h>
void main(){
    int a,sum,num;
    printf("Enter a 5 digit number: ");
    scanf("%i\n",&a);
    num=a%10;//1
    sum+=num;
    a/=10;
    num=a%10;//2
    sum+=num;
    a/=10;
    num=a%10;//3
    sum+=num;
    a/=10;
    num=a%10;//4
    sum+=num;
    a/=10;
    num=a%10;//5
    sum+=num;
    a/=10;
    printf("%i",sum);
}