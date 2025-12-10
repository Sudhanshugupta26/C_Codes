#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void main(){
    int a=9,b=4;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}