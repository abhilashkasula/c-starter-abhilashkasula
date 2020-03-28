#include<stdio.h>

unsigned char is_even(int number) {
  return number % 2 == 0 ;
}

int main(void) {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("%d is %s", number, is_even(number) ? "even" : "not even");
}