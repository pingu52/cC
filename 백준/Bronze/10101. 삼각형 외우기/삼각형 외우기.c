#include <stdio.h>

char *tri_cmp(int a, int b, int c) {
    if (a == 60 && b == 60 && c == 60) {
        return "Equilateral";
    } else if (((a + b + c) == 180) && (a == b || b == c || a == c)) {
        return "Isosceles";
    } else if (((a + b + c) == 180) && a != b && b != c && a != c) {
        return "Scalene";
    } else {
        return "Error";
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%s\n", tri_cmp(a, b, c));

    return 0;
}
