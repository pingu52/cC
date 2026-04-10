#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 500000
#define NAME_LEN 21

static char unheard[MAX][NAME_LEN];
static char result[MAX][NAME_LEN];

int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int binary_search(char arr[][NAME_LEN], int size, char target[]) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(arr[mid], target);

        if (cmp == 0) {
            return 1;
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", unheard[i]);
    }

    qsort(unheard, n, sizeof(unheard[0]), compare);

    int cnt = 0;
    char name[NAME_LEN];

    for (int i = 0; i < m; i++) {
        scanf("%s", name);

        if (binary_search(unheard, n, name)) {
            strcpy(result[cnt], name);
            cnt++;
        }
    }

    qsort(result, cnt, sizeof(result[0]), compare);

    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++) {
        printf("%s\n", result[i]);
    }
    return 0;
}
