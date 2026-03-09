#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 1;
    int res = 1;

    while (n > a) {
        a += 6 * res;
        res++;
    }

    printf("%d\n", res);

    return 0;
}