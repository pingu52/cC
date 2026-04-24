#include <stdio.h>

#define MAX 1000

int map[MAX][MAX];
int dist[MAX][MAX];
int qx[MAX * MAX];
int qy[MAX * MAX];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int start_x = -1, start_y = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
            dist[i][j] = -1;

            if (map[i][j] == 2) {
                start_x = i;
                start_y = j;
            }
        }
    }

    int front = 0, rear = 0;
    qx[rear] = start_x;
    qy[rear] = start_y;
    rear++;

    dist[start_x][start_y] = 0;

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

            if (map[nx][ny] == 0) {
                continue;
            }

            if (dist[nx][ny] != -1) {
                continue;
            }

            dist[nx][ny] = dist[x][y] + 1;
            qx[rear] = nx;
            qy[rear] = ny;
            rear++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 0) {
                printf("0 ");
            } else {
                printf("%d ", dist[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}