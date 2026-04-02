#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    scanf("%s", n);

    int64_t sum = 0;

    for (int i = 0; i < strlen(n); i++) {
        sum += n[i] - '0';
    }

    int64_t ans = 0;

    for (int i = 0; i < strlen(n); i++) {
        ans = ans * 10 + sum;
    }

    printf("%lld\n", ans);

    return 0;
}