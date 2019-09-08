/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: RandomNumbers
Date: 2/24/19
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int getChoice() {

  int choice = 201;
  do {
    printf("How many numbers would you like to enter?: ");
    scanf("%d", &choice);

    if(choice > 200) {
      printf("That number is too high. Max is 200.\n");
    }
  } while(choice > 200);

  return choice;
}


int main() {
  //declare array and quantity and average
  int arr[200];
  int quantity = getChoice();
  int avg = 0;
  //seed the random number generator
  srand(time(NULL));
  //for each index until quantity
  for(int i = 0; i < quantity; i++) {
    //set random number in proper range
    int r = rand() % 10001;
    //add one if 0
    if (r == 0) {
      r++;
    }
    //set current index to random number
    arr[i] = r;
    avg += r;
  }
  //for each element in array
  for(int i = 0; i < quantity; i++) {
    //print num
    printf("Number %d is %d.\n", i+1, arr[i]);
  }

  avg /= quantity;

  printf("The average is %d.\n", avg);

  return 0;
}
