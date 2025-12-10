#include<stdio.h>
void main(){
    int arr[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int done=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                if(arr[i][j]!=1){
                    done=9;
                }
            }
            else{
                if(arr[i][j]!=0){
                    done=9;
                }
            }
        }
    }
    if(done==0){
        printf("Identity Matrix");
    }
    else{
        printf("Not Identity Matrix");
    }
}