#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        int dx = x1 - x2;
        int dy = y1 - y2;

        int dist2 = dx * dx + dy * dy;
        int sum = r1 + r2;
        int diff = r1 - r2;
        if (diff < 0) {
            diff = -diff;
        }

        int sum2 = sum * sum;
        int diff2 = diff * diff;

        if (dist2 == 0) {
            if (r1 == r2) {
                printf("-1\n");
            } else {
                printf("0\n");
            }
        } else if (dist2 == sum2 || dist2 == diff2) {
            printf("1\n");
        } else if (dist2 > diff2 && dist2 < sum2) {
            printf("2\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}