#include <stdio.h>

int main() {
    int a, b, v;

    scanf("%d %d %d", &a, &b, &v);

    int days = (v - a + (a - b) - 1) / (a - b) + 1;

    printf("%d\n", days);
    return 0;
}