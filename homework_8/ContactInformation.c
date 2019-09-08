/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: ContactInformation
Date: 3/17/19
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// create contact struct
struct contact {
  // declare needed parameters
  char fname[15];
  char lname[15];
  char city[15];
  char state[2];
  int zip;
  int phone;

} contact;
// getinfo method
struct contact getInfo() {

  char fn[15];
  char ln[15];
  char cy[15];
  char st[2];
  int z;
  int p;
  // declare contact to return
  struct contact c;
  // take in all inputs and store them in variables
  // put variables into contact parameters
  printf("First Name: ");
  gets(fn);
  strcpy(c.fname, fn);

  printf("Last Name: ");
  gets(ln);
  strcpy(c.lname, ln);

  printf("City: ");
  gets(cy);
  strcpy(c.city, cy);

  printf("state: ");
  gets(st);
  strcpy(c.state, st);

  printf("Zip: ");
  scanf("%d", &z);
  c.zip = z;

  printf("Phone: ");
  scanf("%d", &p);
  c.phone = p;

  return c;
}

void giveInfo(struct contact c) {
  //print different values stored in contact
  printf("First Name: %s\n", c.fname);

  printf("Last Name: %s\n", c.lname);

  printf("City: %s\n", c.city);

  printf("State: %s\n", c.state);

  printf("Zip: %d\n", c.zip);

  printf("Phone: %d\n", c.phone);
}

int main() {
  // ask for info and call getInfo
  printf("Please enter your contact info.\n");
  struct contact c = getInfo(info);

  printf("Here is the information you entered\n");
  // call giveInfo
  giveInfo(c);

  return 0;
}
