#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int lower_bound(int arr[], int size, int target) {
    int left = 0;
    int right = size;

    while (left < right) {
        int mid = (left + right) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

int main() {
    int n;
    scanf("%d", &n);

    int *origin = (int *)malloc(sizeof(int) * n);
    int *sorted = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &origin[i]);
        sorted[i] = origin[i];
    }

    qsort(sorted, n, sizeof(int), compare);

    int unique_count = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || sorted[i] != sorted[i - 1]) {
            sorted[unique_count++] = sorted[i];
        }
    }

    for (int i = 0; i < n; i++) {
        int idx = lower_bound(sorted, unique_count, origin[i]);
        printf("%d ", idx);
    }
    printf("\n");

    free(origin);
    free(sorted);

    return 0;
}