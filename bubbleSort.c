#include<stdio.h>
void main(){
    int a[] = {243,4,32,42,43,25},count=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<(6-i);j++){
            count++;
            if (a[j]>a[j+1]){
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    for (int e = 0; e < 6; e++)
    {
        printf("%d , ",a[e]);
        
    }
}