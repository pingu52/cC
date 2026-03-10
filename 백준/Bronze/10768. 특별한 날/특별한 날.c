#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > 2 || (a == 2 && b > 18)) {
        printf("After\n");
    } else if (a < 2 || (a == 2 && b < 18)) {
        printf("Before\n");
    } else {
        printf("Special\n");
    }

    return 0;
}