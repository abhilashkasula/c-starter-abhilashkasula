#include "convertor.h"

void convert_to_hexadecimal(decimal number, char * hexadecimal, decimal length) {
  LOOP(0, length) {
    hexadecimal[index] = GET_HEX((number >> 28));
    number <<= 4;
  }
}

void print_hexa(decimal number) {
  char hexadecimal[9];
  hexadecimal[8] = 0;
  convert_to_hexadecimal(number, hexadecimal, 8);
  printf("0x%s\n", hexadecimal);
}

void convert_to_binary(decimal number, char * binary, decimal length) {
  LOOP(0, length) {
    binary[index] = GET_BINARY((number >> 31) & 0x1);
    number <<= 1;
  }
}

void print_binary(decimal number) {
  char binary[33];
  binary[32] = 0;
  convert_to_binary(number, binary, 32);
  printf("0b%s\n", binary);
}
