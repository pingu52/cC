#include <stdio.h>

#define M 1234567891

int main() {
    int L;
    char s[51];

    scanf("%d", &L);
    scanf("%s", s);

    long long hash = 0;
    long long pow = 1;

    for (int i = 0; i < L; i++) {
        int num = s[i] - 'a' + 1;
        hash = (hash + num * pow) % M;
        pow = (pow * 31) % M;
    }

    printf("%lld\n", hash);

    return 0;
}