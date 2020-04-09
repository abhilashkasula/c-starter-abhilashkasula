typedef unsigned int decimal;

#define ASCII_ZERO 48
#define ASCII_SEVEN 55
#define GET_HEX(number) number < 10 ? ASCII_ZERO + number : ASCII_SEVEN + number

void print_hexa(decimal);
void convert_to_hexadecimal(decimal, char *, decimal);
