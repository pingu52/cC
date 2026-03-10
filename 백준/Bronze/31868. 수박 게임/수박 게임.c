#include <stdio.h>

int main() {
    int n, k;
    int m = 1;
    scanf("%d %d", &n, &k);

    for (int i = 1; i < n; i++) {
        m *= 2;
    }

    printf("%d\n", k / m);

    return 0;
}