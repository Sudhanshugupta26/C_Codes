#include<stdio.h>
int main() {
  char greetings[] = "Hello World!";
  printf("%s", greetings);// "%s" is used for strings
  printf("%c", greetings[0]);// "%c" is for single character
  greetings[0] = 'J';// modifying string
  printf("%s", greetings);
  for (int i = 0; i < 5; ++i) {// traversing in string
  printf("%c\n", greetings[i]);
}
  char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};// another way of defining
  printf("%s", greetings2);
  /*Why do we include the \0 character at the end? This is known as the "null terminating character", and must be included when creating strings using this method. 
  It tells C that this is the end of the string.*/
  printf("%lu\n", sizeof(greetings));   // Outputs 13
  printf("%lu\n", sizeof(greetings2));  // Outputs 13
  
  char txt[] = "We are the so-called \"Vikings\" from the north.";//for special character.
  printf("%s", txt);
  return 0;
}