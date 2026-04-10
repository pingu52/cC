#include <stdio.h>

int main() {
    int w, h;
    scanf("%d %d", &w, &h);

    double res = (double)w * h / 2.0;
    printf("%.1lf", res);
    return 0;
}
