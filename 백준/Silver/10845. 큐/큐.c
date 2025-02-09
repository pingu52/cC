#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int queue[10001];
    int front = 0, rear = 0;

    while (N--) {
        char opt[6];
        scanf("%s", opt);

        if (strcmp(opt, "push") == 0) {
            int X;
            scanf("%d", &X);
            queue[rear++] = X;
        } else if (strcmp(opt, "pop") == 0) {
            if (front == rear) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[front++]);
            }
        } else if (strcmp(opt, "size") == 0) {
            printf("%d\n", rear - front);
        } else if (strcmp(opt, "empty") == 0) {
            if (front == rear) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        } else if (strcmp(opt, "front") == 0) {
            if (front == rear) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[front]);
            }
        } else if (strcmp(opt, "back") == 0) {
            if (front == rear) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[rear - 1]);
            }
        }
    }
    return 0;
}