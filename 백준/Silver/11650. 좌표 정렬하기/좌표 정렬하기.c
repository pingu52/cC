#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Point;

int compare(const void *a, const void *b) {
    const Point *p1 = (const Point *)a;
    const Point *p2 = (const Point *)b;

    if (p1->x < p2->x) {
        return -1;
    } else if (p1->x > p2->x) {
        return 1;
    } else {
        if (p1->y < p2->y)
            return -1;
        else if (p1->y > p2->y)
            return 1;
        else
            return 0;
    }
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        return 1; // input err
    }

    Point *arr = (Point *)malloc(N * sizeof(Point));
    if (!arr) {
        return 1; // memory err
    }

    for (int i = 0; i < N; i++) {
        if (scanf("%d %d", &arr[i].x, &arr[i].y) != 2) {
            free(arr);
            return 1; // input err
        }
    }

    qsort(arr, N, sizeof(Point), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    free(arr);
    return 0;
}
