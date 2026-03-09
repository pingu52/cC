#include <stdio.h>

int main() {
    int n;
    int queue[1000001];
    int front = 0, rear = 0;
    int count;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        queue[rear++] = i;
    }

    count = n;

    while (count > 1) {
        front++;
        count--;

        queue[rear++] = queue[front++];
    }

    printf("%d\n", queue[front]);
    return 0;
}