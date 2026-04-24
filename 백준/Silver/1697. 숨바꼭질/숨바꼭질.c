#include <stdio.h>

#define MAX 100001

int queue[MAX];
int visited[MAX];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    if (n == k) {
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < MAX; i++) {
        visited[i] = -1;
    }

    int front = 0;
    int rear = 0;

    queue[rear++] = n;
    visited[n] = 0;

    while (front < rear) {
        int now = queue[front++];

        int next_pos[3];
        next_pos[0] = now - 1;
        next_pos[1] = now + 1;
        next_pos[2] = now * 2;

        for (int i = 0; i < 3; i++) {
            int next = next_pos[i];

            if (next < 0 || next >= MAX) {
                continue;
            }

            if (visited[next] == -1) {
                visited[next] = visited[now] + 1;
                queue[rear++] = next;

                if (next == k) {
                    printf("%d\n", visited[next]);
                    return 0;
                }
            }
        }
    }

    return 0;
}