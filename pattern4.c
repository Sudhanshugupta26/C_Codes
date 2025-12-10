#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int k=i;k>1;k--){
            printf(" ");
        }
        for(int j=1;j<=(6-i);j++){
            printf("%i",j);
        }
        printf("\n");
    }
}