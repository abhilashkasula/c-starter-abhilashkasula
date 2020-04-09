typedef unsigned int decimal;

#define ASCII_ZERO 48
#define ASCII_SEVEN 55
#define GET_HEX(number) number < 10 ? ASCII_ZERO + number : ASCII_SEVEN + number
#define GET_BINARY(number) number ? '1' : '0';
#define LOOP(start, end) for(int index = start; index < end; index++)

void print_hexa(decimal);
void convert_to_hexadecimal(decimal, char *, decimal);
void print_binary(decimal);
void convert_to_binary(decimal, char *, decimal);
