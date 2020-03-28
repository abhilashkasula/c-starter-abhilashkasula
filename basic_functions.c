#include<stdio.h>

unsigned char is_even(int number) {
  return number % 2 == 0 ;
}

unsigned char is_odd(int number) {
  return !is_even(number);
}

int square(int number) {
  return number * number;
}

int cube(int number) {
  return number * square(number);
}

int main(void) {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("%d is %s\n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s\n", number, is_odd(number) ? "odd": "not odd");
  printf("Square of %d is %d\n", number, square(number));
  printf("Cube of %d is %d\n", number, cube(number));
}