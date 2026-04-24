#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[100001];
    int prefix[100001];

    prefix[0] = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int k = 0; k < m; k++) {
        int i, j;
        scanf("%d %d", &i, &j);
        printf("%d\n", prefix[j] - prefix[i - 1]);
    }

    return 0;
}