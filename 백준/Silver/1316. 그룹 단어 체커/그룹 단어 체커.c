#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char word[101];
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", word);

        int len = strlen(word);
        int is_group = 1;

        for (int j = 1; j < len; j++) {
            if (word[j] != word[j - 1]) {
                for (int k = 0; k < j; k++) {
                    if (word[j] == word[k]) {
                        is_group = 0;
                        break;
                    }
                }
            }

            if (!is_group) {
                break;
            }
        }

        if (is_group) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}