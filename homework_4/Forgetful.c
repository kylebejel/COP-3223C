/*
Name: Kyle Bejel
Assignment: Forgetful
Date: 2/03/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  //declare variables
  float driveTime, startTime, travelTime, backTime, excessTime;
  //ask for time to get there
  printf("Please enter the amount of time (in minutes) that it takes you to drive to work: ");
  //scan in time to get there
  scanf("%f", &driveTime);
  //ask for alloted time
  printf("Please enter the amount of time (in minutes) that you allow for yourself to get to work: ");
  //scan in alloted time
  scanf("%f", &startTime);
  //ask for time to get back
  printf("Please enter the amount of time (in minutes) since you left home: ");
  //scan in time to get back
  scanf("%f", &backTime);
  //say time to get ack
  printf("If you go home now, it will take you %f minutes to get home\n", backTime);
  //get excess time
  excessTime = startTime - driveTime;
  // get total travel time
  travelTime = 2 * backTime + driveTime;
  //say total travel time
  printf("That will make your total travel time %.2f\n", travelTime);
  //if you don't have time, say late, otherwise on time
  if(travelTime > driveTime + excessTime) {
    printf("You will arrive late if you turn around.\n");
  }
  else {
    printf("You will arrive on time if you turn around.\n");
  }

  return 0;
}
