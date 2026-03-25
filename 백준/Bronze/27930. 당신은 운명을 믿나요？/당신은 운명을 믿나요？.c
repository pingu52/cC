#include <stdio.h>
#include <string.h>

int main() {
    char s[500001];
    char *y = "YONSEI";
    char *k = "KOREA";

    scanf("%s", s);

    int idxY = 0, idxK = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (idxY < 6 && s[i] == y[idxY]) {
            idxY++;
        }

        if (idxK < 5 && s[i] == k[idxK]) {
            idxK++;
        }

        if (idxY == 6) {
            printf("YONSEI\n");
            return 0;
        }

        if (idxK == 5) {
            printf("KOREA\n");
            return 0;
        }
    }

    return 0;
}