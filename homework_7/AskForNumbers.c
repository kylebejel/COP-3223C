/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: AskForNumbers
Date: 2/24/19
*/
#include <stdlib.h>
#include <stdio.h>

// function that asks for and returns choice
int getChoice() {

  int choice;
  // ask for input
  printf("Please enter a number: ");
  scanf("%d", &choice);
  //store and return that input
  return choice;
}

int giveInfo(int quantity, int arr[]) {

  int average = 0;
  // for each number that the user has entered
  for(int i = 0; i < quantity; i++) {
    // print the number and it's index + 1 (arrays start at 0)
    printf("Number %d is %d.\n", i+1, arr[i]);
    // sum each value to the average
    average += arr[i];

  }
  // get the sum and divide it by the number of values
  average /= quantity;
  // print the average
  printf("The average is %d.\n", average);

}

int main() {
  //start quantity at 201 so do-while loop works
  int quantity = 201;
  int arr[200];
  // explain program
  printf("This program will let you enter a list of numbers into an array.\n");
  printf("It will then display all of the numbers,\n");
  printf("and finally display the average of all numbers.\n\n");
  // ask for number of values
  do {
    printf("How many numbers would you like to enter?: ");
    scanf("%d", &quantity);
    //if number is too high, continue to ask
    if(quantity > 200) {
      printf("That number is too high; Maximum number is 200.\n");
    }
  } while(quantity > 200);
  // for each element in arr, call getChoiche
  for(int i = 0; i < quantity; i++) {

    arr[i] = getChoice();

  }
  // call giveInfo
  giveInfo(quantity, arr);

  return 0;
}
