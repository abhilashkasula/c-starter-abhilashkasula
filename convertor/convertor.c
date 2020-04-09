#include "convertor.h"

void convert_to_hexadecimal(decimal number, char * hexadecimal, decimal length) {
  for(int i = 0; i < length; i++) {
    hexadecimal[i] = GET_HEX((number >> 28));
    number <<= 4;
  }
}

void print_hexa(decimal number) {
  char hexadecimal[9];
  convert_to_hexadecimal(number, hexadecimal, 8);
  printf("0x%s\n", hexadecimal);
}
