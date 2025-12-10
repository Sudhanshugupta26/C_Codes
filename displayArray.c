#include<stdio.h>
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        arr[i]+=1;
        printf("%d ",arr[i]);
    }    
    printf("\n");
}
void main(){
    int arr[]={1,2,3,4,5};
   int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    display(arr,n);
}
