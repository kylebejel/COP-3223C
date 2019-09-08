/*
Name: Kyle Bejel
Date: 2/4/2019
Project: GetPI
Instructor: Leinecker
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//create function
float getPI() {
  //return pi
  return M_PI;

}

int main() {
  //assign variable to return value of function
  float myPI = getPI();
  //print result
  printf("The value of PI that was return is: %f\n", myPI);

  return 0;
}
