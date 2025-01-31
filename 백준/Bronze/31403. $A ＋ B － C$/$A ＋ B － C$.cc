#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  int numres = a + b - c;

  char str1[12], str2[12], str3[24];
  sprintf(str1, "%d", a);
  sprintf(str2, "%d", b);
  strcpy(str3, str1);
  strcat(str3, str2);

  int ab = atoi(str3);
  int strres = ab - c;

  printf("%d\n", numres);
  printf("%d\n", strres);

  return 0;
}
