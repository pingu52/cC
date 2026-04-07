#include <stdbool.h>
#include <stdio.h>

int graph[1001][1001];
bool visited[1001];
int queue[1001];

int n, m, v;

void dfs(int now) {
    visited[now] = true;
    printf("%d ", now);

    for (int next = 1; next <= n; next++) {
        if (graph[now][next] == 1 && !visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    int front = 0;
    int rear = 0;

    queue[rear++] = start;
    visited[start] = true;

    while (front < rear) {
        int now = queue[front++];
        printf("%d ", now);

        for (int next = 1; next <= n; next++) {
            if (graph[now][next] == 1 && !visited[next]) {
                visited[next] = true;
                queue[rear++] = next;
            }
        }
    }
}

int main() {
    scanf("%d %d %d", &n, &m, &v);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    dfs(v);
    printf("\n");

    for (int i = 1; i <= n; i++) {
        visited[i] = false;
    }

    bfs(v);
    printf("\n");

    return 0;
}
