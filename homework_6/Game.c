/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: Game
Date: 2/17/19
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define ADD 1
#define MULT 2

//recursively get number of digits
int numDigits(int number) {
  //if the number is less than 10, it is only 1 digit
  if(number < 10) {
    return 1;
  }
  else {
    //divide the number by 10 and add 1 until number < 10
    return numDigits(number/10) + 1;
  }

}

int numPoints(double timesec) {
  //depending on difference in seconds, return a score
  if(timesec < 1){
    return 10;
  }
  else if(timesec >= 1 && timesec < 2) {
    return 9;
  }
  else if(timesec >= 2 && timesec < 3) {
    return 8;
  }
  else if(timesec >= 3 && timesec < 4) {
    return 7;
  }
  else if(timesec >= 4 && timesec < 5) {
    return 6;
  }
  else if(timesec >= 5 && timesec < 6) {
    return 5;
  }
  else if(timesec >= 6 && timesec < 7) {
    return 4;
  }
  else if(timesec >= 7 && timesec < 8) {
    return 3;
  }
  else if(timesec >= 8 && timesec < 9) {
    return 2;
  }
  else if(timesec >= 9 && timesec < 10) {
    return 1;
  }
  else if(timesec >= 10) {
    return 0;
  }
}

double arithGame(int max, int quantity, int op) {
  //declare start time and number of right answers
  int start = time(0);
  int rights = 0;
  //for loop for quantity of questions
  for(int i = 0; i < quantity; i++) {
    //random num 1 and 2
    int r = rand() % (max+1);
    int r2 = rand() % (max+1);
    //if op is adding
    if(op == ADD) {
      int answer;
      int solution = r + r2;
      //ask question
      printf("What is %d + %d? ", r, r2);
      scanf("%d", &answer);
      if(solution != answer) {
        //answer is wrong, print right answer
        printf("That is wrong :(. The answer is %d!\n", solution);
      }

      else {
        //correct answer, increment right answer counter
        printf("That's correct, great job!\n");
        rights++;
      }


    }

    else if(op == MULT) {
      int answer, rights = 0;
      int solution = r * r2;
      //print question
      printf("What is %d * %d? ", r, r2);
      scanf("%d", &answer);
      if(solution != answer) {
        //answer is wrong, print right answer
        printf("That is wrong :(. The answer is %d\n", solution);
      }

      else {
        //correct answer, increment right answer counter
        printf("That's correct, great job!\n");
        rights++;
      }
    }

  }
  //get time passed
  int t = time(0) - start;
  printf("You took anaverage of %d seconds per question.\n", t/quantity);
  //calculate score
  int roundScore = t/rights;
  printf("Your score for the round is %d.\n", roundScore);
  return roundScore;

}

double guessGame(int max) {

  int guess, count = 1;
  int r = rand() % (max+1);
  int start = time(0);
  //while the guess is wrong
  while(guess != r) {
    //ask for guess, increment count
    printf("Enter the guess!: ");
    count++;
    scanf("%d", &guess);
    //guess is too low
    if(guess < r) {
      printf("Your guess is too low.\n");
    }
    //guess is too high
    else if(guess > r) {
      printf("Your guess is too high.\n");
    }
    //guess is right
    else {
      printf("Correct! Amazing!\n");
    }
  }
  //get time that is passed
  int t = time(0) - start;
  //correct number
  printf("You guessed the right number %d in %d guesses.\n", r, count);
  //calculate numbers
  return numPoints(t/(2 * numDigits(max)));
}

int main() {

  int option, op, max, quantity, score = 0;

  srand(time(0));
  //do while loop, do only when quit isn't selected
  do {
    //ask for options
    printf("What would you like to do?:\n\n");
    printf("1) Play Arithmetic Game\n2) Play Guessing Game\n3) Print Score\n4) Quit\n");
    scanf("%d", &option);
    //if arithmetic game
    if(option == 1) {
      //ask for add or mult
      printf("1) Addition\n2) Multiplication");
      scanf("%d", &op);
      printf("What is the max number you would like?: ");
      scanf("%d", &max);
      printf("How many problems do you want?: ");
      scanf("%d", &quantity);
      //add score of arithmetic to score and call function
      score += arithGame(max, quantity, op);

    }
    //if random game
    else if(option == 2) {
      //enter random number
      printf("Enter the maximum number for the game: ");
      scanf("%d", &max);
      //add points to score and call guessGame
      score += guessGame(max);

    }
    //if print score
    else if(option == 3) {
      //print score
      printf("Your current score is %d\n", score);

    }

  } while (option != 4);

  return 0;
}
