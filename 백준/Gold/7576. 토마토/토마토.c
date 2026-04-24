#include <stdio.h>

#define MAX 1000

int box[MAX][MAX];
int qx[MAX * MAX];
int qy[MAX * MAX];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &box[i][j]);

            if (box[i][j] == 1) {
                qx[rear] = i;
                qy[rear] = j;
                rear++;
            }
        }
    }

    while (front < rear) {
        int x = qx[front];
        int y = qy[front];
        front++;

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }

            if (box[nx][ny] == 0) {
                box[nx][ny] = box[x][y] + 1;
                qx[rear] = nx;
                qy[rear] = ny;
                rear++;
            }
        }
    }

    int max_day = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (box[i][j] == 0) {
                printf("-1\n");
                return 0;
            }

            if (box[i][j] > max_day) {
                max_day = box[i][j];
            }
        }
    }

    printf("%d\n", max_day - 1);
    return 0;
}