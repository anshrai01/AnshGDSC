#include<stdio.h> // Including header file

int main(){

  char myString[300000000]; // creating a character array
  gets(myString); // use gets to store input
  printf("You entered:  %s", myString);
  return 0;
}