#include <stdio.h>

int main() {
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    if (n < 0) {
        printf("32\n");
        return 0;
    }

    while (n > 0) {
        n >>= 1;
        count++;
    }

    printf("%d\n", count);
    return 0;
}