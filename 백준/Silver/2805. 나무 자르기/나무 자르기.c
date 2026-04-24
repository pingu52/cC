#include <stdio.h>

#define MAX 1000000

int tree[MAX];

int main() {
    int n;
    long long m;
    scanf("%d %lld", &n, &m);

    int max_height = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &tree[i]);
        if (tree[i] > max_height) {
            max_height = tree[i];
        }
    }

    int left = 0;
    int right = max_height;
    int answer = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (tree[i] > mid) {
                sum += (tree[i] - mid);
            }
        }

        if (sum >= m) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("%d\n", answer);
    return 0;
}