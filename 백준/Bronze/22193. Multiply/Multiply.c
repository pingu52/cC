#include <stdio.h>
#include <string.h>

#define MAX 50005

char A[MAX], B[MAX];
int result[100010];

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);
    scanf("%s", A);
    scanf("%s", B);

    // 뒤에서부터 한 자리씩 곱셈
    for (int i = N - 1; i >= 0; i--) {
        for (int j = M - 1; j >= 0; j--) {
            int mul = (A[i] - '0') * (B[j] - '0');
            int p1 = i + j;
            int p2 = i + j + 1;

            int sum = mul + result[p2];
            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }

    // 앞쪽 0 건너뛰기
    int start = 0;
    while (start < N + M - 1 && result[start] == 0) {
        start++;
    }

    for (int i = start; i < N + M; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}