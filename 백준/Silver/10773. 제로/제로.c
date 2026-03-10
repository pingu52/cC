#include <stdio.h>

int main() {
    int k;

    scanf("%d", &k);

    int a[k];

    for (int i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }

    int top = -1;

    for (int i = 0; i < k; i++) {
        if (a[i] == 0) {
            if (top >= 0) {
                top--;
            }
        } else {
            a[++top] = a[i];
        }
    }

    int sum = 0;

    for (int i = 0; i <= top; i++) {
        sum += a[i];
    }

    printf("%d\n", sum);
    return 0;
}