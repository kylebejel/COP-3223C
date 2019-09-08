/*
Name: Kyle Bejel
Course: COP 3223C
Section: 0004
Assignment: Swaps
Date: 3/24/2019
*/
#include <stdlib.h>
#include <stdio.h>

// function to swap ints
void swapInt(int *x, int *y)
{
    // declare temp to hold pointer of x
    int temp = *x;
    // pointer of x is assigned pointer of y
    *x = *y;
    // pointer of y is assigned temp (previous pointer of x)
    *y = temp;
}

// function to swap doubles
void swapDbl(double *x, double *y)
{
    // declare temp to hold pointer of x
    double temp = *x;
    // pointer of x is assigned pointer of y
    *x = *y;
    // pointer of y is assigned temp (previous pointer of x)
    *y = temp;
}

// function to swap strings
void swapStr(char **str_1, char **str_2)
{
    // declare temp to hold pointer of str_1
    char *temp = *str_1;
    // pointer of str_1 is assigned pointer of str_2
    *str_1 = *str_2;
    // pointer of str_2 is assigned temp (previous pointer of str_1)
    *str_2 = temp;
}

int main()
{
    // declare needed variables
    int i, j;
    double x, y;
    // using character pointers for strings
    char *a, *b;
    // allocate memory for declared pointers (length 15 and ending char)
    a = (char *)malloc(16 * sizeof(char));
    b = (char *)malloc(16 * sizeof(char));
    // ask for first and second integers and store them
    printf("Please enter the first integer: i = ");
    scanf("%d", &i);
    printf("Please enter the second integer: j = ");
    scanf("%d", &j);
    // ask for first and second doubles and store them
    printf("Please enter the first double: x = ");
    scanf("%lf", &x);
    printf("Please enter the second double: y = ");
    scanf("%lf", &y);
    // ask for first and second string (dont use &, will make double pointer)
    printf("Please enter the first string: a = ");
    scanf("%s", a);
    printf("Please enter the second double: b = ");
    scanf("%s", b);
    // call int method and print results
    swapInt(&i, &j);
    printf("i is now %d and j is now %d\n", i, j);
    // call double method and print results
    swapDbl(&x, &y);
    printf("x is now %lf and y is now %lf\n", x, y);
    // call string method and print results
    swapStr(&a, &b);
    printf("a is now %s and b is now %s\n", a, b);
    // free memory that is allocated for a and b
    free(a);
    free(b);

    return 0;
}