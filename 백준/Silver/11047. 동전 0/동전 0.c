#include <stdio.h>

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int coin[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }

    int count = 0;

    for (int i = n - 1; i >= 0; i--) {
        count += k / coin[i];
        k %= coin[i];
    }

    printf("%d\n", count);

    return 0;
}