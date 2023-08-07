#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int a,b,c,S,aot;
    printf("Enter the length of sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    S=(a+b+c)/2;
    aot = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("%d and %d",S,aot);
}