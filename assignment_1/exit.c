#include <stdio.h>
#include<stdlib.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c); 
    exit(0);// any constant inside exit.

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

    return 0;
}
