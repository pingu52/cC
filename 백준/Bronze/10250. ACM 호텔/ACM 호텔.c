#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor = N % H;
        int room = N / H;

        if (floor == 0) {
            floor = H;
        } else {
            room++;
        }

        int res = floor * 100 + room;
        printf("%d\n", res);
    }
    return 0;
}