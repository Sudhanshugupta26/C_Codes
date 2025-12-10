#include<stdio.h>
void main(){
    int a[] = {243,4,32,42,43,25};
    for(int i=0;i<6;i++){
        int min = 9999999;
        int indi = 0;
        int remain = 0;
        for (int j = i; j < 6; j++){
            if(min>a[j]){
                min = a[j];
                indi = j;
            }
        }
        remain = a[i];
        a[i] = min;
        a[indi] = remain;
    }
    for (int e = 0; e < 6; e++)
    {
        printf("%d , ",a[e]);
        
    }
}