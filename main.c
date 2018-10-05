/*
 * This program takes the values for a, b and c in a quadratic function and returns the the values of x.
 *
 * Author: Gerardo González Becerril.
 * Date: October 2nd, 2018.
 * Email: a01411981@itesm.mx
 */

 // Libraries needed.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Main function.
int main(){

  double a; // Variable for the 'a' value.
  double b; // Variable for the 'b' value.
  double c; // Variable for the 'c' value.
  char inputA[25]; // Variable for the 'a' input.
  char inputB[25]; // Variable for the 'b' input.
  char inputC[25]; // Variable for the 'c' input.
  char *leftoversA; // Variable for what's not a number of the 'a' input.
  char *leftoversB; // Variable for what's not a number of the 'a' input.
  char *leftoversC; // Variable for what's not a number of the 'a' input.
  double discriminant; // Variable for storing the value of the discriminant.

  // Asks for values of a, b and c as strings, then adds them to their respective input variables and converts them
  // into double, while leaving the rest in the leftovers variable.
  printf("Enter a value for a: \n");
  fgets(inputA, 25, stdin);
  a = strtod(inputA, &leftoversA);
  printf("Enter a value for b: \n");
  fgets(inputB, 25, stdin);
  b = strtod(inputB, &leftoversB);
  printf("Enter a value for c: \n");
  fgets(inputC, 25, stdin);
  c = strtod(inputC, &leftoversC);

  // Compares the original input value to the residue after removing the numbers from it to see if it hasnt' changed.
  if ((strlen(inputA) == strlen(leftoversA)) || (strlen(inputB) == strlen(leftoversB)) || (strlen(inputC) == strlen(leftoversC))) {

      // If there were no numbers, it'll print the following.
      printf("You must only enter numbers.");

  } else {

      // Checks if a is equal to 0.
      if (a != 0) {

          // Calculates the value of the discriminant.
          discriminant = b * b - 4 * a * c;

          // If the discriminant is under 0, the square root cannot be calculated.
          if (discriminant < 0) {

              printf("There are no values of x.");

              // If the discriminant is equal to 0, there is only one value for 'x'.
          } else if (discriminant == 0) {

              printf("The value of x is: %.2lf ", -b /(2* a));

              // If the discriminant is over 0, there are two values for 'x'.
          } else {

              printf("The values of x are: %.2lf and %.2lf", (-b+sqrt(discriminant))/(2*a), (-b-sqrt(discriminant))/(2*a));

          }

      } else {

          printf("'a' has to have a value that's not 0 for the function to be quadratic.");

      }

  }

  return 0;

}