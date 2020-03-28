#include <stdio.h>

unsigned int factorial(int);
int fibonacci(int);

int fibonacci(int size) {
  int first = 0, second = 1;
  printf("Fibonacci Series:  ");
  for(int index = 1; index <= size; index++) {
    printf("%d, ", first);
    int temp = second;
    second += first;
    first = temp;
  }
  return 0;
}

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
  fibonacci(10);
  return 0;
}
