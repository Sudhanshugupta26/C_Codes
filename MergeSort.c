#include<stdio.h>

int[] Merge(int arr1[],int arr2[],int n1,int n2){
    int arr[100];
    int i=0,j=0,k=0;
    while (i<n1){
        while (j<n2){
            if (arr1[i]<arr2[j]){
                arr[k]=arr1[i];
                i++;
                k++;
            }
            if (arr1[i]<arr2[j]){
                arr[k]=arr2[j];
                j++;
                k++;
            }
            else{
                arr[k]=arr1[i];
                arr[k+1]=arr2[j];
                k+=2;
                i++;
                j++;
            }
            
        }
        
    }
    return arr;
    
}
int[] MergeSort(int arr[],int start,int end,int n){
    int mid = (start + (end+1))/2;
    int arr1[]=MergeSort(arr,start,mid,mid+1);
    int arr2[]=MergeSort(arr,mid,end,end-mid+1);
    return Merge(arr1,arr2,mid+1,end-mid+1);
}

void main(){
    int arr[]={45,10,90,40};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sol[100]=MergeSort(arr,0,len-1,len);
    for (int i = 0; i < len; i++)
    {
        printf("%d",sol[i]);
    }
}