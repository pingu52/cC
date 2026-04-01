#include <stdio.h>

int main() {
    int resp;
    int a = 0, b = 0;

    for (int i = 1; i <= 9; i++) {
        printf("? A %d\n", i);
        fflush(stdout);

        scanf("%d", &resp);

        if (resp == 1) {
            a = i;
            break;
        }
    }

    for (int i = 1; i <= 9; i++) {
        printf("? B %d\n", i);
        fflush(stdout);

        scanf("%d", &resp);

        if (resp == 1) {
            b = i;
            break;
        }
    }

    printf("! %d\n", a + b);
    fflush(stdout);

    return 0;
}