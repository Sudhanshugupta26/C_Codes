#include<stdio.h>
void main(){
    int l =12;
    for(int i=1;i<=l;i++){
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }
    for (int k = (l-1);k>0; k--)
    {
        for (int m =1; m <= k; m++)
        {
            printf("%d",m);
        }
    printf("\n");
    }
    
}