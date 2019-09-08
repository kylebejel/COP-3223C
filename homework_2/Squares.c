/*
Author: Kyle Bejel
Project Name: Squares
Date: 1/20/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

  /* print empty line (style choice) */
  printf("\n");
  /* for loop that increments from 0-20 */
  for(int i = 0; i < 21; i++){
    /* square the counter value and print it */
    printf("The square of the counter value is %d\n", i*i);
  }

  return 0;
}
