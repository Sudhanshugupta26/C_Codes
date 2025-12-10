#include<stdio.h>
void main(){
    int a[] = {243,4,32,42,43,25};
    for(int i=0;i<6;i++){
        int max = 0;
        int indi = 0;
        int remain = 0;
        for (int j = 0; j < (6-i); j++){
            if(max<a[j]){
                max=a[j];
                indi = j;
            }
        }
        remain = a[6-(i+1)];
        a[6-(i+1)] = max;
        a[indi] = remain;
    }
    for (int e = 0; e < 6; e++)
    {
        printf("%d , ",a[e]);
        
    }
}