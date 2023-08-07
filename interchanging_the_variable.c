#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 2 integers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d and %d",a,b);
}