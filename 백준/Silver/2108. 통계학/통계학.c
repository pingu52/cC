#include <math.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int freq[8001] = {0};
    int sum = 0;
    int min = 4001;
    int max = -4001;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        freq[x + 4000]++;
        sum += x;

        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    // 1. 산술평균
    int avg = (int)round((double)sum / n);

    // 2. 중앙값
    int count = 0;
    int mid = 0;
    for (int i = 0; i < 8001; i++) {
        count += freq[i];
        if (count > n / 2) {
            mid = i - 4000;
            break;
        }
    }

    // 3. 최빈값
    int max_freq = 0;
    for (int i = 0; i < 8001; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }

    int mod = 0;
    int found = 0;
    for (int i = 0; i < 8001; i++) {
        if (freq[i] == max_freq) {
            mod = i - 4000;
            found++;
            if (found == 2) {
                break;
            }
        }
    }

    // 4. 범위
    int range = max - min;

    printf("%d\n%d\n%d\n%d\n", avg, mid, mod, range);

    return 0;
}