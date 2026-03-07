#include <stdio.h>
#include <stdlib.h>

int a[100000];

int compare(const void *x, const void *y) {
    int n1 = *(const int *)x;
    int n2 = *(const int *)y;

    if (n1 < n2) return -1;
    if (n1 > n2) return 1;
    return 0;
}

int binary_search(int key, int size) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            return 1;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return 0;
}

int main() {
    int n, m;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        printf("%d\n", binary_search(x, n));
    }

    return 0;
}