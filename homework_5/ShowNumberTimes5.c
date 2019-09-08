/*
Name: Kyle Bejel
Date: 2/4/2019
Project: ShowNumberTimes5
Instructor: Leinecker
*/

#include <stdlib.h>
#include <stdio.h>

//create function
int mult5AndShow(int num) {
  //declare result variable
  int result;
  //multiply by 5
  result = num * 5;
  //print result
  printf("The number %d multiplied by 5 is %d.\n", num, result);
}

int main() {
  //declare num variable
  int num;
  //ask  for num
  printf("What number would you like to multiply by 5?: ");
  //scan in num
  scanf("%d", &num);
  //call function
  mult5AndShow(num);

  return 0;

}
