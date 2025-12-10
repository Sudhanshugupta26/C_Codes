#include<stdio.h>
int arrSize(int *a){
    int b =(sizeof(a)/sizeof(a[0]));
    return b;
}
void concatenate_arrays(int *array1, int *array2, int size1, int size2, int *array3) {
  int i, j;
  for (i = 0; i < size1; i++) {
    array3[i] = array1[i];
  }
  for (i = size1; i < size1 + size2; i++) {
    array3[i] = array2[i - size1];
  }
}
void Quicksort(int *a){
    int pivot = a[0];
    for(int i=0;i<10;i++){
        if(a[1+i]<pivot && a[9-i]>pivot){
            continue;
        }
        else if(a[1+i]>pivot && a[9-i]<pivot){
            a[1+i]=a[1+i]+a[9-i];
            a[9-i]=a[1+i]-a[9-i];
            a[1+i]=a[1+i]-a[9-i];
        }
        else if (a[1+i]<pivot && a[9-i]<pivot){
            a[9-i]=a[9-i]+a[0];
            a[0]=a[9-i]-a[0];
            a[9-i]=a[9-i]-a[0];
        }
    }
}
void main(){
    int a[] = {243,4,32,42,43,25,23,432,5,2};
    Quicksort(a);
    for (int e = 0; e < 10; e++)
    {
        printf("%d , ",a[e]);
        
    }
}