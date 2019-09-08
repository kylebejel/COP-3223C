/*
Author: Kyle Bejel
Project Name: Fahrenheit
Date: 1/20/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

  /* declare variable for temperature */
  float temp;
  /* declare multiplier in equation, use floats to avoid integer division */
  float multiplier = 5.0/9.0;
  /* polite greeting :) */
  printf("\nWelcome to this temperature converter!\n");
  /* ask for input */
  printf("Please enter a temperature in degrees farenheit: ");
  /* scan in input */
  scanf("%f", &temp);
  /* use formula to convert to celsius */
  temp -= 32;
  temp *= multiplier;
  /* print final results */
  printf("\nThat is %.2f degrees celsius.\n", temp);

  return 0;

}
