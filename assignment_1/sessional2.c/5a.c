#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6,7,14,18,67,27,21,35}; //4
    int len = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i =0;i<len;i++){
        if(arr[i]%7==0){
            count+=1;
        }
    }
    printf("%d",count);
}