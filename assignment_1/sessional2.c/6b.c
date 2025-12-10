#include<stdio.h>
void greater(int a, int b){
    if(a>b){
        printf("%d is greatest",a);
    }
    else{
        printf("%d is greatest",b);
    }
}
void main(){
    int a=10,b=8;
    greater(a,b);
}