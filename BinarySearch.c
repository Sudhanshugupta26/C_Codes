#include<stdio.h>
int main(){
    int a[] = {1,2,3,4,5,6,7},im = 5,loc=-1;
    int lb=0,ub=6;
    loc=(lb+ub)/2;
    while(lb<=ub){
        loc=(lb+ub)/2;
        if(a[loc]<im){
            lb=loc+1;
        }
        else if(a[loc]>im){
            ub=loc;
        }
        else{
            printf("%d",loc+1);
            break;
        }
    }
    return 0;
}