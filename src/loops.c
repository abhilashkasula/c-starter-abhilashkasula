#include <stdio.h>

unsigned int factorial(int);
int fibonacci(int);
unsigned char is_even(int);
int print_odds(int);
int print_evens(int);
int print_multiplication_table(int, int);
long int add_numbers(int, int);
long int multiply_numbers(int, int);

unsigned char is_even(int number) {
  return number % 2 == 0 ;
}

int print_evens(int length) {
  printf("\nEven numbers between 1 and %d are:\n", length);
  for(int num = 1; num <= length; num++) {
    is_even(num) && printf("%d\n", num);
  }
  return 0;
}

int print_odds(int length) {
  printf("\nOdd numbers between 1 and %d are:\n", length);
  for(int num = 1; num <= length; num++) {
    !is_even(num) && printf("%d\n", num);
  }
  return 0;
}

int fibonacci(int length) {
  int first = 0, second = 1;
  printf("\nFibonacci Series:\n");
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

int print_multiplication_table(int m, int n) {
  printf("\nMultiplication table of %d till %d:\n", m, n);
  for(int i = 1; i <= n; i++) {
    printf("%d\n", m*i);
  }
  return 0;
}

long int add_numbers(int startingAt, int endingAt) {
  long int sum = 0;
  for(int index = startingAt; index <= endingAt; index++) {
    sum += index;
  }
  return sum;
}

long int multiply_numbers(int startingAt, int endingAt) {
  long int product = 1;
  for(int index = startingAt; index <= endingAt; index++) {
    product *= index;
  }
  return product;
}

int main(void) {
  int number = 5, num2 = 10;
  printf("\nFactorial of %d is %u\n", number, factorial(number));
  fibonacci(10);
  print_odds(10);
  print_evens(10);
  print_multiplication_table(5, 10);
  printf("\nSum of numbers between %d and %d is %ld\n", number, num2, add_numbers(number, num2));
  printf("Product of numbers between %d and %d is %ld\n", number, num2, multiply_numbers(number, num2));
  return 0;
}
