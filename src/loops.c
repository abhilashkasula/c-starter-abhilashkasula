#include <stdio.h>

unsigned int factorial(int);
int fibonacci(int);
unsigned char is_even(int);
int print_odds(int);
int print_evens(int);

unsigned char is_even(int number) {
  return number % 2 == 0 ;
}

int print_evens(int length) {
  printf("Even numbers between 1 and %d are:\n", length);
  for(int num = 1; num <= length; num++) {
    is_even(num) && printf("%d\n", num);
  }
  return 0;
}

int print_odds(int length) {
  printf("Odd numbers between 1 and %d are:\n", length);
  for(int num = 1; num <= length; num++) {
    !is_even(num) && printf("%d\n", num);
  }
  return 0;
}

int fibonacci(int length) {
  int first = 0, second = 1;
  printf("Fibonacci Series:\n");
  for(int index = 1; index <= length; index++) {
    printf("%d\n", first);
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
  print_odds(10);
  print_evens(10);
  return 0;
}
