/*
Name: Kyle Bejel
Assignment: FuelEfficiency
Date: 2/03/2019
Instructor: Leinecker
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
//declare necessary variables
float rad, rev, gal, mpg;
//ask for radius
printf("What is the radius of your tires in inches?: ");
//scan in radius
scanf("%f", &rad);
//ask for revolutions
printf("How many revolutions did your tire make?: ");
//scan in revolutions
scanf("%f", &rev);
//ask for gallons
printf("How many gallons of gas did your car use?: ");
//scan in gallons
scanf("%f", &gal);
//convert to miles
mpg = rad / 63360;
//convert to diameter
mpg *= 2;
//get circumference
mpg *= M_PI;
//get distance traveled
mpg *= rev;
//divide by gallons to get mpg
mpg /= gal;
//print answers
printf("Your car averaged %.2f miles per gallon.\n", mpg);
//check base case for nested ifs
if(mpg >= 0) {
  //if less than equal 20, poor
  if(mpg <= 20) {
    printf("Your car got poor mileage.\n");
  }
  //if less than equal to 30, average
  else if(mpg <= 30) {
    printf("Your car got average mileage.\n");
  }
  //if less than equal to 40, good
  else if(mpg <= 40) {
    printf("Your car got good mileage.\n");
  }
  //otherwise, excellent
  else {
    printf("Your car got excellent mileage.\n");
  }
}


  return 0;
}
