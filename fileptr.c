#include<stdio.h>
void main(){
    FILE* fptr;
    fptr=fopen("C:\\Users\\Pradeep Saxena\\Desktop\\FirstCFile","r");
    // fprintf(fptr,"First text in c programe to create a text document.\nMy name is Sudhanshu Gupta.");
    char myString[100];
    // fgets(myString, 100, fptr);
    // Read the content and print it
    while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
    }
    fclose(fptr);
}