#include<stdio.h>
#include<string.h>
void main(){
    char str1[100]="abcdedcba";
    char str2[100];
    int a = strlen(str1); // value will be 9
    int i=a-1;
    int p=0;
    while(i>=0){
        if(str1[a-i-1]==str1[i]);
        else{p = 4;}
        i--;
    }
    if(p==0){
        printf("palindrome");}
    else{
         printf("not palindrome");}
}