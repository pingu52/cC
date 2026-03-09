#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;

    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("%d\n", i);
            min = i;
            break;
        }
    }
    printf("%d\n", a * b / min);
    return 0;
}