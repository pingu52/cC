#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    return (x > y) - (x < y);
}

int lower_bound(int *arr, int size, int key) {
    int left = 0;
    int right = size;  

    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] >= key) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;  
}

int upper_bound(int *arr, int size, int key) {
    int left = 0;
    int right = size;

    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] > key) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int N;  
    scanf("%d", &N);

    int cards[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &cards[i]);
    }

    qsort(cards, N, sizeof(int), compare);

    int M;  
    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        int key;
        scanf("%d", &key);

        int lb = lower_bound(cards, N, key);
        int ub = upper_bound(cards, N, key);
        printf("%d ", ub - lb);
    }
    printf("\n");

    return 0;
}