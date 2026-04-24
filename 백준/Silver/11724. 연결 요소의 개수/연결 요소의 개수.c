#include <stdio.h>
#include <stdbool.h>

int graph[1001][1001];
bool visited[1001];
int n, m;

void dfs(int now) {
    visited[now] = true;

    for (int next = 1; next <= n; next++) {
        if (graph[now][next] == 1 && !visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}