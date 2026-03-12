#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int compare(const void *a, const void *b) {
    Point *p1 = (Point *)a;
    Point *p2 = (Point *)b;

    if (p1->y != p2->y) {
        return p1->y - p2->y;
    }
    return p1->x - p2->x;
}

int main() {
    int n;
    scanf("%d", &n);

    Point *p = (Point *)malloc(sizeof(Point) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    qsort(p, n, sizeof(Point), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", p[i].x, p[i].y);
    }

    free(p);
    return 0;
}