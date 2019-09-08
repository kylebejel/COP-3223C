/*
Name: Kyle Bejel
Date: 1/27/2019
Professor: Leinecker
Assignment: DoWhileEnforceRange
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  /* declare min, max, and num */
  int min = 5;
  int max = 25;
  int num;
  /* ask for number within range */
  do {
    printf("Please enter a number from %d to %d: ", min, max);
    scanf("%d", &num);
    printf("\n");
  } while(num < min || num > max); /* continue to ask if out of range */
  /* respond politely */
  printf("Thanks, you chose %d.", num);

  return 0;
}
