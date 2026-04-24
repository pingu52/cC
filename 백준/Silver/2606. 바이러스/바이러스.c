#include <stdio.h>
#include <stdbool.h>

int graph[101][101];
bool visited[101];
int count = 0;
int n;

void dfs(int now) {
    visited[now] = true;

    for (int next = 1; next <= n; next++) {
        if (graph[now][next] == 1 && !visited[next]) {
            count++;
            dfs(next);
        }
    }
}

int main() {
    int m;
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    dfs(1);

    printf("%d\n", count);
    return 0;
}