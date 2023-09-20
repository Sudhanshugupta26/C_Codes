#include<stdio.h>
void main(){
    int a;
    printf("Enter marks of student: ");
    scanf("%d",&a);
    while(a>0){
    if(a>=33){
        goto Pass;
    }
    else{
        goto Fail;
    }
    Pass:
        printf("Congratulations! You are passed.");
        break;
    Fail:
        printf("You are failed.....");
        break;
}}