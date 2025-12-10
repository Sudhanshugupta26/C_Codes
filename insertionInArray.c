#include<stdio.h>
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
}
void insert(int arr[],int len,int idx,int ele){
    // int temp = arr[idx];
    // int arr[idx] = ele;
    for (int i = len; i >= idx+1; i--)
    {
        int temp = arr[i-1];
        arr[i] = temp;
    }
    arr[idx]=ele;
    
}
void main(){
    int arr[100]={1,2,3,4,5,6,7};
    int n = 7;
    int a ;
    int b;
    printf("Enter element: ");
    scanf("%d",&a);
    printf("Enter index: ");
    scanf("%d",&b);
    insert(arr,n,b,a);
    display(arr,n+1);
}