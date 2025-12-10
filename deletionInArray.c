#include<stdio.h>
void delete(int arr[],int len,int idx){
    for (int i = idx; i < len; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[len]=0;
}
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");    
}
void main(){
    int arr[100]={1,2,3,4,5,6,7};
    int n = 7;
    int b;
    printf("Enter index: ");
    scanf("%d",&b);
    display(arr,n);
    delete(arr,n,b);
    display(arr,n-1);
}