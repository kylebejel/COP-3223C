/*
Name: Kyle Bejel
Date: 2/4/2019
Project: GetRandom
Instructor: Leinecker
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//create function
int getRandomNumber() {
  //declare result variable
  int r;
  //set seed to time
  srand(time(NULL));
  //random number from 0 - 100
  r = rand() % 101;
  //add one in case r is 0
  if(r == 0) {
    r++;
  }
  //return random number
  return r;

}

int main() {

  //call random number function
  int rnd = getRandomNumber();
  //print result
  printf("The random number that was generated is: %d\n", rnd);

  return 0;
}
