#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char room[101][101];

    for (int i = 0; i < n; i++) {
        scanf("%s", room[i]);
    }

    int row_cnt = 0;
    int col_cnt = 0;

    for (int i = 0; i < n; i++) {
        int len = 0;
        for (int j = 0; j < n; j++) {
            if (room[i][j] == '.') {
                len++;
            } else {
                if (len >= 2) {
                    row_cnt++;
                }
                len = 0;
            }
        }
        if (len >= 2) {
            row_cnt++;
        }
    }

    for (int j = 0; j < n; j++) {
        int len = 0;
        for (int i = 0; i < n; i++) {
            if (room[i][j] == '.') {
                len++;
            } else {
                if (len >= 2) {
                    col_cnt++;
                }
                len = 0;
            }
        }
        if (len >= 2) {
            col_cnt++;
        }
    }

    printf("%d %d\n", row_cnt, col_cnt);

    return 0;
}
