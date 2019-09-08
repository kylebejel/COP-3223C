/*
Author: Kyle Bejel
Project Name: BackwardsCount
Date: 1/20/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

  /* print empty line (style choice) */
  printf("\n");
  /* create for loop that decrements from 100 by 5 */
  for(int i = 100; i >-1; i-=5){
    /* print the counter throughout the for loop */
    printf("The counter is now %d\n", i);
  }

  return 0;
}
