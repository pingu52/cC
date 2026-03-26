#include <stdio.h>
#include <string.h>

int main() {
    int m;
    scanf("%d", &m);

    int s[21] = {0};
    char str[10];
    int x;

    while (m--) {
        scanf("%s", str);

        if (strcmp(str, "add") == 0) {
            scanf("%d", &x);
            s[x] = 1;
        } else if (strcmp(str, "remove") == 0) {
            scanf("%d", &x);
            s[x] = 0;
        } else if (strcmp(str, "check") == 0) {
            scanf("%d", &x);
            printf("%d\n", s[x]);
        } else if (strcmp(str, "toggle") == 0) {
            scanf("%d", &x);
            s[x] = !s[x];
        } else if (strcmp(str, "all") == 0) {
            for (int i = 1; i <= 20; i++) {
                s[i] = 1;
            }
        } else if (strcmp(str, "empty") == 0) {
            memset(s, 0, sizeof(s));
        }
    }

    return 0;
}