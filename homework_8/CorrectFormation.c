/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: CorrectFormation
Date: 3/17/19
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// function that will join char arrays
void joinNames(char fname[], char lname[], char completeName[]) {
  // declare counters
  int i, j;

  i = 0;
  // while it isn't an ending character
  while(fname[i] != '\0') {
    // add the ith element to complete name at i
    completeName[i] = fname[i];
    // if its the first character of first name, capitalize it
    if(i == 0) {
      completeName[i] = toupper(completeName[i]);
    }
    i++;
  }
  // add space between the two names
  completeName[i] = ' ';
  i++;

  j = 0;
  // while it isn't an ending character
  while(lname[j] != '\0'){
    // completeName at i gets last name at j
    completeName[i] = lname[j];
    // if first element of last name, capitalize it
    if(j == 0) {
      completeName[i] = toupper(completeName[i]);
    }
    i++;
    j++;
  }
  // make last character an ending character
  completeName[i] = '\0';

}

int main() {
  // declare char arrays
  char fname[30];
  char lname[30];
  char completeName[60];
  // ask for first name
  printf("Please enter your first name: ");
  scanf("%s", &fname);
  // ask for last name
  printf("Please enter your last name: ");
  scanf("%s", &lname);
  // call joinNames
  joinNames(fname, lname, completeName);
  // print complete names
  printf("The complete name is %s.\n", completeName);

  return 0;
}
