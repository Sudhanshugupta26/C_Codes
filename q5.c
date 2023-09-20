#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    a=b+a;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}