/*
Name: Kyle Bejel
Date: 2/4/2019
Project: CarFunctions
Instructor: Leinecker
*/

#include <stdlib.h>
#include <stdio.h>

//create function
void talkAboutCar1() {
  //multiple print statements about 67 firebird
  printf("I love the 1967 Pontiac Firebird.\n");
  printf("I don't have one, but I hopefully will at some point.\n");
  printf("It is my dream car.\n");

}

void talkAboutCar2() {
  //multiple print statements about the miata
  printf("The Mazda Miata is very cool.\n");
  printf("I don't have one, but my friend and I look forward to having one as a project car.\n");
  printf("It would be fun to work on and to drive.\n");

}

int main() {
  //call functions
  talkAboutCar1();
  printf("\n");
  talkAboutCar2();

  return 0;
}
