#include <stdbool.h>
#include <stdio.h>

int area[50][50];
bool visited[50][50];
int m, n, k;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int y, int x) {
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n) {
            continue;
        }

        if (area[ny][nx] == 1 && !visited[ny][nx]) {
            dfs(ny, nx);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d", &m, &n, &k);

        for (int i = 0; i < 50; i++) {
            for (int j = 0; j < 50; j++) {
                area[i][j] = 0;
                visited[i][j] = false;
            }
        }

        for (int i = 0; i < k; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            area[y][x] = 1;
        }

        int count = 0;

        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                if (area[y][x] == 1 && !visited[y][x]) {
                    dfs(y, x);
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}