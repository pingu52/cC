#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int queue[1001];
    int front = 0, rear = 0;
    int size = 0;

    for (int i = 1; i <= n; i++) {
        queue[rear] = i;
        rear = (rear + 1) % 1001;
        size++;
    }

    int count = 0;

    printf("<");

    while (size > 0) {
        int x = queue[front];
        front = (front + 1) % 1001;
        size--;

        count++;

        if (count == k) {
            printf("%d", x);
            if (size > 0) {
                printf(", ");
            }
            count = 0;
        } else {
            queue[rear] = x;
            rear = (rear + 1) % 1001;
            size++;
        }
    }

    printf(">\n");

    return 0;
}