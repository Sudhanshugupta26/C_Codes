#include<stdio.h>
int length(int arr[]){
    int len = sizeof(arr)/sizeof(arr[0]);
    return len;
}
void display(int arr[]){
    for (int i = 0; i < length(arr); i++){
        printf("%d\n",arr[i]);
    }
}
void push(int arr[]){
    printf("Enter a number: ");
    int ele;
    scanf("%d",&ele);
    arr[length(arr)]=ele;
}
void pop(int arr[]){
    for (int i = 0; i < length(arr)-1; i++){
        arr[i]=arr[i+1];
    }
    arr[length(arr)-1]=0;
}

void main(){
    int arr[100] = {12,324,234};
    push(arr);
    push(arr);
    display(arr);
    pop(arr);
    display(arr);    
}