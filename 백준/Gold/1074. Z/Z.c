#include <stdio.h>

int solve(int n, int r, int c) {
    if (n == 0) {
        return 0;
    }

    int half = 1 << (n - 1);
    int area = half * half;

    if (r < half && c < half) {
        return solve(n - 1, r, c);
    } else if (r < half && c >= half) {
        return area + solve(n - 1, r, c - half);
    } else if (r >= half && c < half) {
        return 2 * area + solve(n - 1, r - half, c);
    } else {
        return 3 * area + solve(n - 1, r - half, c - half);
    }
}

int main() {
    int n, r, c;
    scanf("%d %d %d", &n, &r, &c);

    printf("%d\n", solve(n, r, c));
    return 0;
}