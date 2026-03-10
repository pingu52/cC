#include <stdio.h>

#define MAX 50001
#define MAX_RES 100001

char a[MAX], b[MAX];
int res[MAX_RES];

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    scanf("%s", a);
    scanf("%s", b);

    for (int i = n - 1; i >= 0; i--) {
        int da = a[i] - '0';
        for (int j = m - 1; j >= 0; j--) {
            res[i + j + 1] += da * (b[j] - '0');
        }
    }

    for (int i = n + m - 1; i > 0; i--) {
        res[i - 1] += res[i] / 10;
        res[i] %= 10;
    }

    int start = 0;
    while (start < n + m - 1 && res[start] == 0) {
        start++;
    }

    for (int i = start; i < n + m; i++) {
        printf("%d", res[i]);
    }
    printf("\n");

    return 0;
}