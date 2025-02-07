#include <stdio.h>

int main() {
    long long N, T, P;
    long long S, M, L, XL, XXL, XXXL;

    scanf("%lld", &N);
    scanf("%lld %lld %lld %lld %lld %lld", &S, &M, &L, &XL, &XXL, &XXXL);
    scanf("%lld %lld", &T, &P);

    long long ds = (S + T - 1) / T;
    long long dm = (M + T - 1) / T;
    long long dl = (L + T - 1) / T;
    long long dxl = (XL + T - 1) / T;
    long long dxxl = (XXL + T - 1) / T;
    long long dxxxl = (XXXL + T - 1) / T;

    long long totalshirt = ds + dm + dl + dxl + dxxl + dxxxl;

    long long penb = N / P;
    long long pens = N % P;

    printf("%lld\n", totalshirt);
    printf("%lld %lld\n", penb, pens);

    return 0;
}
