#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[9], b[9], c[9];
    int n;

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if (isdigit(a[0])) {
        n = atoi(a) + 3;
    } else if (isdigit(b[0])) {
        n = atoi(b) + 2;
    } else {
        n = atoi(c) + 1;
    }

    if (n % 3 == 0 && n % 5 == 0) {
        printf("FizzBuzz\n");
    } else if (n % 3 == 0) {
        printf("Fizz\n");
    } else if (n % 5 == 0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", n);
    }

    return 0;
}