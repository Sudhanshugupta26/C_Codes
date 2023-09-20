#include<stdio.h>
void main(){
    int a,b=1,i=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    do{
        b*=i;
        i++;
    }while(i<=a);
    printf("%d is the factorial of %d",b,a);
}