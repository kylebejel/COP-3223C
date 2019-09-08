/*
Author: Kyle Bejel
Project Name: AskForStartEndAndIncrement
Date: 1/20/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

  /* declare variables for start point, end point, and increment value */
  int start, end, increment;
  /* ask for input with a line spaced before it (stylistic choice) */
  printf("\nAt what number would you like to start? ");
  /* scan in input for start point */
  scanf("%d", &start);
  /* ask for input for end point */
  printf("\nAt what number would you like to end? ");
  /* scan in input for end point */
  scanf("%d", &end);
  /* ask for input for increment value */
  printf("\nBy what number would you like to increment? ");
  /* scan in input for increment value */
  scanf("%d", &increment);
  /* print extra line (style choice) */
  printf("\n");

  /* for loop using start point, end point, and increment value */
  for(int i = start; i <= end; i += increment){
    /* print counter value */
    printf("The counter value is now %d\n", i);
  }

  return 0;
}
