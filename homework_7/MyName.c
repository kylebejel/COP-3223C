/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: MyName
Date: 2/24/19
*/
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
  //declare needed char arrays
  char name[15];
  char upperName[15];
  char lowerName[15];
  char initialCappedName[15];
  //ask for name
  printf("What is your name?: ");
  scanf("%s", &name);
  //for each element in name array
  for(int i = 0; i < 15; i++){
    //toupper each element in name and put it in uppername
    upperName[i] = toupper(name[i]);
    //tolower each element in name and put in lowername
    lowerName[i] = tolower(name[i]);
    //if first element in name, toupper
    if(i == 0){
      initialCappedName[i] = toupper(name[i]);
    }
    //else tolower it
    else{
      initialCappedName[i] = tolower(name[i]);
    }
  }
  //print results
  printf("Name is: %s\n", name);
  printf("Upper Name is: %s\n", upperName);
  printf("Lower Name is: %s\n", lowerName);
  printf("Initial Capped Name is: %s\n", initialCappedName);

  return 0;
}
