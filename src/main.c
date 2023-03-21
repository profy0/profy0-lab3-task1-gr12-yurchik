/* main.c */
#include "server.c"
#include <stdio.h>
int main(void) {

  
  char s1[128], s2[128];

  scanf("%s", &s1);
  scanf("%s", &s2);

  int ans = calc_the_sum_of_symbols(s1,s2);

  printf("%d", ans);
}
