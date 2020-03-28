#include <stdio.h>

unsigned int factorial(int);

unsigned int factorial(int number) {
  unsigned long int fact = 1;
  for(int index = 1; index <= number; index++) {
    fact *= index;
  }
  return fact;
}

int main(void) {
  int number = 5;
  printf("Factorial of %d is %u\n", number, factorial(number));
  return 0;
}
