#include<stdio.h>
void main(){
    int i=0;
    START:
        printf("hello\n");
        i++;
    printf("hi\n");
    if(i<5){
    goto START;}
}