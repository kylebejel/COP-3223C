/*
Name: Kyle Bejel
Date: 1/27/2019
Professor: Leinecker
Assignment: WhileCount
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  /* declare counter (start at 1) */
  int counter = 1;
  /* start while loop with condition that counter is below 17 */
  while(counter < 17){
    /* print value of counter */
    printf("The counter value is %d\n", counter);
    /* increment */
    counter++;
  }

  return 0;
}
