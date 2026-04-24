#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int dp[12];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 11; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }

    return 0;
}