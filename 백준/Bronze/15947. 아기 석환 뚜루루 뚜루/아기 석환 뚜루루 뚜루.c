#include <stdio.h>

void turu(int k) {
    if (k >= 5) {
        printf("tu+ru*%d\n", k);
    } else {
        printf("tu");
        for (int i = 0; i < k; i++) {
            printf("ru");
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int cycle = (N - 1) / 14;
    int pos = (N - 1) % 14;

    if (pos == 0 || pos == 12) {
        printf("baby\n");
    } else if (pos == 1 || pos == 13) {
        printf("sukhwan\n");
    } else if (pos == 4) {
        printf("very\n");
    } else if (pos == 5) {
        printf("cute\n");
    } else if (pos == 8) {
        printf("in\n");
    } else if (pos == 9) {
        printf("bed\n");
    } else if (pos == 2 || pos == 6 || pos == 10) {
        turu(cycle + 2);
    } else if (pos == 3 || pos == 7 || pos == 11) {
        turu(cycle + 1);
    }

    return 0;
}