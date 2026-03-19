#include <stdio.h>

int main() {
    char isbn[14];

    scanf("%s", isbn);

    int star = -1;
    int sum = 0;

    for (int i = 0; i < 13; i++) {
        if (isbn[i] == '*') {
            star = i;
            continue;
        }

        int num = isbn[i] - '0';
        if (i % 2 == 0) {
            sum += num;
        } else {
            sum += 3 * num;
        }
    }

    for (int x = 0; x <= 9; x++) {
        int total = sum;

        if (star % 2 == 0) {
            total += x;
        } else {
            total += 3 * x;
        }

        if (total % 10 == 0) {
            printf("%d\n", x);
            break;
        }
    }

    return 0;
}