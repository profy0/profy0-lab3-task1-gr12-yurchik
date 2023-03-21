/* server.c */
#include "interface.h"
#include "stddef.h"

int calc_count_of_symbol(char* str) {
  int cnt = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    cnt += (str[i] == 'H');
  }
  return cnt;
}

int calc_the_sum_of_symbols(char* first, char* second) {
  return calc_count_of_symbol(first) + calc_count_of_symbol(second);
}
