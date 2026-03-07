#include <stdio.h>

int main() {
    int n;
    int stack[100001];
    int top = -1;
    int start = 0;
    char result[400001];
    int idx = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        if (value > start) {
            for (int j = start + 1; j <= value; j++) {
                stack[++top] = j;
                result[idx++] = '+';
                result[idx++] = '\n';
            }
            start = value;
        } else if (top == -1 || stack[top] != value) {
            printf("NO\n");
            return 0;
        }

        top--;
        result[idx++] = '-';
        result[idx++] = '\n';
    }

    result[idx] = '\0';
    printf("%s", result);

    return 0;
}