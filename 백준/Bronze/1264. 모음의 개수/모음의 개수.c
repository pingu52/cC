#include <stdio.h>
#include <string.h>

int main() {
    char s[257];

    while (1) {
        fgets(s, sizeof(s), stdin);

        if (strcmp(s, "#\n") == 0 || strcmp(s, "#") == 0) {
            break;
        }

        int count = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
                s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U') {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}