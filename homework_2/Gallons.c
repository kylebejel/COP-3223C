/*
Author: Kyle Bejel
Project Name: Gallons
Date: 1/20/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  /* declare variables for liters and milliliters values */
  float liters, milliliters;
  /* introduction to the program */
  printf("\nHey there, this program converts from gallons to liters and milliliters.\n");
  /* ask for input */
  printf("How many gallons would you like to convert?: ");
  /* scan in input and store in liters variable */
  scanf("%f", &liters);
  /* be polite of course */
  printf("\nThank you!\n");
  /* convert gallons to specified units */
  liters *= 3.78541;
  milliliters = liters * 1000;
  /* print final answer */
  printf("That is %.3f liters and %.3f milliliters.\n", liters, milliliters);

  return 0;

}
