/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: SearchArray
Date: 3/17/19
*/
#include <stdio.h>
#include <stdlib.h>
// include boolean library (i like it more than 0 and 1)
#include <stdbool.h>

#define NUMNUMS 9

int main()
{
  int data[] = { 4, 5, 8, 9, 13, 22, 44, 55, 65 };
  int num;
  // declare found as false
  bool found = false;
  // ask for input
  printf("What number would you like to look for?: ");
  scanf("%d", &num);
  // traverse the data array
  for(int i = 0; i < NUMNUMS; i++) {
    // if number is found, set found to true and break
    if(data[i] == num) {
      found = true;
      break;
    }
  }
  // if found is true, print number is found
  if(found) {

    printf("Number was found.\n");
  }
  // else print number is not found
  else{

    printf("Number was not found.\n");
  }


  return 0;
}
