#include <stdio.h>
#include <string.h>

#define MAX 1000

void normalize(const char *src, char *dst) {
    int i = 0;
    while (src[i] == '0' && src[i + 1] != '\0') {
        i++;
    }
    strcpy(dst, src + i);
}

int compare_num(const char *a, const char *b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    if (len_a > len_b) return 1;
    if (len_a < len_b) return -1;

    int cmp = strcmp(a, b);
    if (cmp > 0) return 1;
    if (cmp < 0) return -1;
    return 0;
}

void subtract_num(const char *a, const char *b, char *result) {
    char temp[MAX];
    int len_a = strlen(a);
    int len_b = strlen(b);
    int i = len_a - 1;
    int j = len_b - 1;
    int k = 0;
    int borrow = 0;

    while (i >= 0 || j >= 0) {
        int da = (i >= 0 ? a[i] - '0' : 0) - borrow;
        int db = (j >= 0 ? b[j] - '0' : 0);

        if (da < db) {
            da += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        temp[k++] = (da - db) + '0';
        i--;
        j--;
    }

    while (k > 1 && temp[k - 1] == '0') {
        k--;
    }

    for (int t = 0; t < k; t++) {
        result[t] = temp[k - 1 - t];
    }
    result[k] = '\0';
}

void divide_bigint(const char *dividend, const char *divisor, char *quotient, char *remainder) {
    char rem[MAX] = "0";
    char temp[MAX];
    char q[MAX];
    int qlen = 0;

    for (int i = 0; dividend[i] != '\0'; i++) {
        int len_rem = strlen(rem);

        if (strcmp(rem, "0") == 0) {
            rem[0] = dividend[i];
            rem[1] = '\0';
        } else {
            rem[len_rem] = dividend[i];
            rem[len_rem + 1] = '\0';
        }

        normalize(rem, temp);
        strcpy(rem, temp);

        int digit = 0;
        while (compare_num(rem, divisor) >= 0) {
            subtract_num(rem, divisor, temp);
            strcpy(rem, temp);
            digit++;
        }

        q[qlen++] = digit + '0';
    }

    q[qlen] = '\0';
    normalize(q, quotient);
    strcpy(remainder, rem);
}

int main() {
    char n[MAX], m[MAX];
    char quotient[MAX], remainder[MAX];

    scanf("%s %s", n, m);

    divide_bigint(n, m, quotient, remainder);

    printf("%s\n", quotient);
    printf("%s\n", remainder);

    return 0;
}