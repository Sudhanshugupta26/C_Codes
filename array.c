#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d", myNumbers[0]);
  myNumbers[0]=33; // changing value of an index
  printf("\n%d\n", myNumbers[0]);
  for (int i = 0; i < 4; i++) { // traversing an anarray
  printf("%d\n", myNumbers[i]);
}
// Declare an array of four integers:
int myNumbers1[4]; // defined number of elements

// Add elements
myNumbers1[0] = 25;
myNumbers1[1] = 50;
myNumbers1[2] = 75;
myNumbers1[3] = 100;
  return 0;
}