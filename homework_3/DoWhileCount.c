/*
Name: Kyle Bejel
Date: 1/27/2019
Professor: Leinecker
Assignment: DoWhileCount
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  /* declare counter (start at 1) */
  int counter = 1;
  /* start do while loop, print counter value*/
  do {
    /* print value of counter */
    printf("The counter value is %d\n", counter);
    /* increment */
    counter++;
  } while(counter < 17); /* do above statements while counter < 17 */

  return 0;
}
