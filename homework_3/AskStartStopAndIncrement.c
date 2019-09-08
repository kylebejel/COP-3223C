/*
Name: Kyle Bejel
Date: 1/27/2019
Professor: Leinecker
Assignment: AskStartStopAndIncrement
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  /* declare needed variables */
  int start, end, increment;
  /* ask for start */
  printf("At what number would you like to start counting?: ");
  /* scan in start */
  scanf("%d", &start);
  /* ask for end */
  printf("\nAt what number would you like to end?: ");
  /* scan in end */
  scanf("%d", &end);
  /* ask for increment */
  printf("\nBy what number would you like to increment?: ");
  /* scan in increment */
  scanf("%d", &increment);
  /* start while loop */
  while(start < end+1){
    /* print counter value */
    printf("The counter value is %d\n", start);
    /* increment */
    start += increment;
  }

  return 0;

}
