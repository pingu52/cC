#include <stdio.h>

int main() {
  int a[3];
  scanf("%d %d %d", &a[0], &a[1], &a[2]);

  if (a[0] > a[1]) {
    int t = a[0];
    a[0] = a[1];
    a[1] = t;
  }
  if (a[1] > a[2]) {
    int t = a[1];
    a[1] = a[2];
    a[2] = t;
  }
  if (a[0] > a[1]) {
    int t = a[0];
    a[0] = a[1];
    a[1] = t;
  }

  printf("%d", a[1]);

  return 0;
}
