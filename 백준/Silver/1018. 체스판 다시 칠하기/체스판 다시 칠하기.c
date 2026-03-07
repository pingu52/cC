#include <stdio.h>

char board[50][51];

int min(int a, int b) {
    return a < b ? a : b;
}

int count_repaint(int x, int y) {
    int repaint_w = 0;
    int repaint_b = 0;

    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            int parity = (i + j) % 2;

            if (parity == 0) {
                if (board[i][j] != 'W') repaint_w++;
                if (board[i][j] != 'B') repaint_b++;
            } else {
                if (board[i][j] != 'B') repaint_w++;
                if (board[i][j] != 'W') repaint_b++;
            }
        }
    }

    return min(repaint_w, repaint_b);
}

int main(void) {
    int n, m;
    int answer = 64;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", board[i]);
    }

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int repaint = count_repaint(i, j);
            if (repaint < answer) {
                answer = repaint;
            }
        }
    }

    printf("%d\n", answer);
    return 0;
}