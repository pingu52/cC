#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int num = 666;
    int count = 1;
    char str[20];

    scanf("%d", &n);

    while (count != n) {
        num++;
        sprintf(str, "%d", num);

        if (strstr(str, "666") != NULL) {
            count++;
        }
    }

    printf("%d\n", num);
    return 0;
}