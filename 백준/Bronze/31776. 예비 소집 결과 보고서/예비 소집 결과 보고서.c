#include <stdio.h>

int main(void) {
    int n;
    int answer = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int t1, t2, t3;
        scanf("%d %d %d", &t1, &t2, &t3);

        int good = 1;

        if (t1 == -1) {
            good = 0;
        }

        // 2번을 풀었다면 1번보다 빠를 수 없음
        if (t2 != -1 && t1 > t2) {
            good = 0;
        }

        // 2번을 안 풀었는데 3번을 푼 경우 불가능
        if (t2 == -1 && t3 != -1) {
            good = 0;
        }

        // 3번을 풀었다면 2번보다 빠를 수 없음
        if (t3 != -1 && t2 > t3) {
            good = 0;
        }

        if (good) {
            answer++;
        }
    }

    printf("%d\n", answer);
    return 0;
}