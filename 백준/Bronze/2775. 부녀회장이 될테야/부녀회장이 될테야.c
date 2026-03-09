#include <stdio.h>

int main(void) {
    int apt[15][15] = {0};
    int t;

    for (int i = 1; i <= 14; i++) {
        apt[0][i] = i;
    }

    for (int k = 1; k <= 14; k++) {
        for (int n = 1; n <= 14; n++) {
            apt[k][n] = apt[k][n - 1] + apt[k - 1][n];
        }
    }

    scanf("%d", &t);

    while (t--) {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);

        printf("%d\n", apt[k][n]);
    }

    return 0;
}