#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
float average(int, int, int);
int get_greatest(int, int);
int greatest_of_three(int, int, int);
float convert_to_centigrade(int);
float convert_to_fahrenheit(int);
float calculate_SI(long int, int, int);
int gcd(int, int);

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

int get_greatest(int num1, int num2) {
  return num1 > num2 ? num1 : num2;
}

int greatest_of_three(int num1, int num2, int num3) {
  return get_greatest(get_greatest(num1, num2), num3);
}

float convert_to_centigrade(int temp) {
  return ((temp - 32) * 5) / 9.00;
}

float convert_to_fahrenheit(int temp) {
  return ((temp * 9.00) / 5) + 32;
}

float calculate_SI(long int principle, int interest, int period) {
  return (principle * interest * period) / 100.00;
}

int gcd(int num1, int num2) {
  int remainder = num1, number = num2;
  while(remainder > 0) {
    int temp = remainder;
    remainder = number % remainder;
    number = temp;
  }
  return number;
}

int lcm(int num1, int num2) {
  return (num1 * num2) / gcd(num1, num2);
}

int main(void) {
  int number = 3, num2 = 10, num3 = 3;
  int temp = 100;
  int period = 2, interest = 8;
  long int principle = 400;
  printf("%d is %s\n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s\n", number, is_odd(number) ? "odd": "not odd");
  printf("Square of %d is %d\n", number, square(number));
  printf("Cube of %d is %d\n", number, cube(number));
  printf("Average of %d, %d and %d is %f\n", number, num2, num3, average(number, num2, num3));
  printf("Greatest of %d, %d and %d is %d\n", number, num2, num3, greatest_of_three(number, num2, num3));
  printf("Centigrade of given Fahrenheit %d is %f\n", temp, convert_to_centigrade(temp));
  printf("Fahrenheit of given Centigrade %d is %f\n", temp, convert_to_fahrenheit(temp));
  printf("SI of Principle: %ld, Interest: %d, Period: %d is %f\n", principle, interest, period, calculate_SI(principle, interest, period));
  printf("GCD of %d, %d is %d\n", number, num2, gcd(number, num2));
  printf("LCM of %d, %d is %d\n", number, num2, lcm(number, num2));
}