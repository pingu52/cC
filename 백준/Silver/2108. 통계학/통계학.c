#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    qsort(arr, n, sizeof(int), compare);

    // 1. 산술평균
    int avg = (int)round((double)sum / n);

    // 2. 중앙값
    int mid = arr[n / 2];

    // 3. 최빈값
    int mode = arr[0];
    int max_freq = 0;
    int found_second = 0;

    for (int i = 0; i < n; ) {
        int value = arr[i];
        int count = 0;

        while (i < n && arr[i] == value) {
            count++;
            i++;
        }

        if (count > max_freq) {
            max_freq = count;
            mode = value;
            found_second = 0;
        } else if (count == max_freq && found_second == 0) {
            mode = value;
            found_second = 1;
        }
    }

    // 4. 범위
    int range = arr[n - 1] - arr[0];

    printf("%d\n", avg);
    printf("%d\n", mid);
    printf("%d\n", mode);
    printf("%d\n", range);

    free(arr);
    return 0;
}