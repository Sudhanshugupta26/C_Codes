#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[] = {1,2,3,4,5,6,7},im = 5,loc=-1;
    for(int i=0;i<7;i++){
        if(im==a[i]){
            loc=i;
        }
    }
    printf("%d",loc+1);
}