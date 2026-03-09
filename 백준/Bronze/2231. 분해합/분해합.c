#include <stdio.h>

int main() {
    int n;
    int result = 0;

    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        int num = i;
        int sum = 0;

        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        if (i + sum == n) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);
    return 0;
}