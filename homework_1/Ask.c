/*
Author: Kyle Bejel
Project Name: Ask
Date: 1/13/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

  /* declare variables for later */
  int width, height;
  /* ask for height */
  printf("Please enter a width: ");
  /* scan in width */
  scanf("%d", &width);
  /* skip line */
  printf("\n");
  /* ask for width */
  printf("Please enter a height: ");
  /* scan in height */
  scanf("%d", &height);
  /* skip line */
  printf("\n");
  /* be polite */
  printf("Thank You!!\n");
  /* print final results */
  printf("You entered a width of %d and a height of %d.", width, height);

  return 0;

}
