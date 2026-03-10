#include <stdio.h>

int main() {
    int n;
    int year = 2024;

    scanf("%d", &n);

    n -= year;

    printf("%d\n", n);

    return 0;
}