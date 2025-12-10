#include<stdio.h>
void main(){
    int a = 234576;
    int sum=0;
    while (a>0){
        int div = a%10;
        sum+=div;
        a /= 10;
    }
    printf("sum is %d",sum);
}