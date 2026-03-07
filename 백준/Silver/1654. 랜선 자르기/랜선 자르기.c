#include <stdio.h>

int main() {
    int k, n;
    long long arr[10000];
    long long max = 0, min = 0, mid;
    
    scanf("%d %d", &k, &n);

    for (int i = 0; i < k; i++) {
        scanf("%lld", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    max++;

    while (min < max) {
        mid = (min + max) / 2;
        long long count = 0;

        for (int i = 0; i < k; i++) {
            count += arr[i] / mid;
        }

        if (count < n) {
            max = mid;
        } else {
            min = mid + 1;
        }
    }

    printf("%lld\n", min - 1);
    return 0;
}