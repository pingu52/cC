#include <stdio.h>
#include <string.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    char word[16];
    int len = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        int wlen = strlen(word);

        if (len == 0) {
            printf("%s", word);
            len = wlen;
        } else if (len + wlen <= k) {
            printf(" %s", word);
            len += wlen;
        } else {
            printf("\n%s", word);
            len = wlen;
        }
    }

    printf("\n");
    return 0;
}
