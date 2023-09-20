#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is the greatest integer",a);
        }
        else{
            printf("%d is the greatest integer",c);
        }
    }
    else{
        if(b>c){
            printf("%d is the greatest integer",b);
        }
        else{
            printf("%d is the greatest integer",c);
        }
    }
}