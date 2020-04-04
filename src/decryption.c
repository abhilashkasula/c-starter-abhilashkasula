#include <stdio.h>

void rotate_and_print(int * list, int length) {
  for(int i = 0; i < length; i++) {
    int num = list[i];
    if(num > 96) {
      num = (list[i] + 13) % 122;
      if(num < 97) num += 96;
    }
    printf("%c", num);
  }
  printf("\n");
}

int main(void) {
  int encrypted[] = {116, 98, 32, 112,98, 101, 98,  97, 110};
  int another[] = {110,111,117,118,121,110,102,117,32,108,98,104,32,116,98,103,32,118,103};
  int length = sizeof(encrypted) / sizeof(int);
  int another_length = sizeof(another) / sizeof(int);
  rotate_and_print(encrypted, length);
  rotate_and_print(another, another_length);
  return 0;
}
