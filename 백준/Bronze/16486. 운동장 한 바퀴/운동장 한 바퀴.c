#include <stdio.h>
#define PI 3.141592

int main() {
    int d1, d2;

    scanf("%d %d", &d1, &d2);

    printf("%.6f\n", (2 * PI * d2) + (d1 * 2));

    return 0;
}