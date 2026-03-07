#include <stdio.h>

int main() {
    int M, N;
    static int is_not_prime[1000001] = {0};

    scanf("%d %d", &M, &N);

    is_not_prime[0] = 1;
    is_not_prime[1] = 1;

    for (int i = 2; i * i <= N; i++) {
        if (!is_not_prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                is_not_prime[j] = 1;
            }
        }
    }

    for (int i = M; i <= N; i++) {
        if (!is_not_prime[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}