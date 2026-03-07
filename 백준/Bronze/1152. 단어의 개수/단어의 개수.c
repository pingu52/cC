#include <stdio.h>

int main() {
    static char str[1000002];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' &&
            (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}