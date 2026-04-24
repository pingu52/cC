#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int n;
    scanf("%d", &n);

    int p[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    qsort(p, n, sizeof(int), compare);

    int sum = 0;
    int prefix = 0;

    for (int i = 0; i < n; i++) {
        prefix += p[i];
        sum += prefix;
    }

    printf("%d\n", sum);
    return 0;
}