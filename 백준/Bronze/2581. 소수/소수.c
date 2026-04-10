#include <stdbool.h>
#include <stdio.h>

bool is_prime(int x) {
    if (x < 2) {
        return false;
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    int sum = 0;
    int min = 0;
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++) {
        if (is_prime(i)) {
            sum += i;

            if (min == 0) {
                min = i;
            }
        }
    }

    if (min == 0) {
        printf("-1\n");
    } else {
        printf("%d\n%d\n", sum, min);
    }

    return 0;
}
