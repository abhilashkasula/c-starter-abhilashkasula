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

float average(int num1, int num2, int num3) {
  int sum = num1 + num2 + num3;
  return sum / 3.00;
}

int getGreatest(int num1, int num2) {
  return num1 > num2 ? num1 : num2;
}

int greatestOfThree(int num1, int num2, int num3) {
  return getGreatest(getGreatest(num1, num2), num3);
}

float convertToCentigrade(int temp) {
  return ((temp - 32) * 5) / 9.00;
}

float convertToFahrenheit(int temp) {
  return ((temp * 9.00) / 5) + 32;
}

float calculateSI(long int principle, int interest, int period) {
  return (principle * interest * period) / 100.00;
}

int main(void) {
  int number = 2, num2 = 2, num3 = 3;
  int temp = 100;
  int period = 2, interest = 8;
  long int principle = 400;
  printf("%d is %s\n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s\n", number, is_odd(number) ? "odd": "not odd");
  printf("Square of %d is %d\n", number, square(number));
  printf("Cube of %d is %d\n", number, cube(number));
  printf("Average of %d, %d and %d is %f\n", number, num2, num3, average(number, num2, num3));
  printf("Greatest of %d, %d and %d is %d\n", number, num2, num3, greatestOfThree(number, num2, num3));
  printf("Centigrade of given Fahrenheit %d is %f\n", temp, convertToCentigrade(temp));
  printf("Fahrenheit of given Centigrade %d is %f\n", temp, convertToFahrenheit(temp));
  printf("SI of Principle: %ld, Interest: %d, Period: %d is %f\n", principle, interest, period, calculateSI(principle, interest, period));
}