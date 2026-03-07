#include <stdio.h>

int main() {
    static char str[1000001];
    int count[26] = {0};
    int max = 0;
    char answer = '?';

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            count[str[i] - 'A']++;
        } else {
            count[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            answer = (char)(i + 'A');
        } else if (count[i] == max) {
            answer = '?';
        }
    }

    printf("%c\n", answer);
    return 0;
}