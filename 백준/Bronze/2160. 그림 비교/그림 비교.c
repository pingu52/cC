#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char pic[n][5][8];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%s", pic[i][j]);
        }
    }

    int ans1 = 1, ans2 = 1;
    int min_diff = 35;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = 0;

            for (int r = 0; r < 5; r++) {
                for (int c = 0; c < 7; c++) {
                    if (pic[i][r][c] != pic[j][r][c]) {
                        diff++;
                    }
                }
            }

            if (diff <= min_diff) {
                min_diff = diff;
                ans1 = i + 1;
                ans2 = j + 1;
            }
        }
    }

    printf("%d %d\n", ans1, ans2);

    return 0;
}