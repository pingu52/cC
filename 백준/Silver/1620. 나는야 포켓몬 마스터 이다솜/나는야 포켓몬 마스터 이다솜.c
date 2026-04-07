#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[21];
    int number;
} Pokemon;

int compare(const void *a, const void *b) {
    Pokemon *pa = (Pokemon *)a;
    Pokemon *pb = (Pokemon *)b;

    return strcmp(pa->name, pb->name);
}

int binary_search(Pokemon arr[], int n, char target[]) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(arr[mid].name, target);

        if (cmp == 0) {
            return arr[mid].number;
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char names[100001][21];
    Pokemon arr[100001];

    for (int i = 1; i <= n; i++) {
        scanf("%s", names[i]);
        strcpy(arr[i - 1].name, names[i]);
        arr[i - 1].number = i;
    }

    qsort(arr, n, sizeof(Pokemon), compare);

    char question[21];

    for (int i = 0; i < m; i++) {
        scanf("%s", question);

        if (isdigit(question[0])) {
            int num = atoi(question);
            printf("%s\n", names[num]);
        } else {
            printf("%d\n", binary_search(arr, n, question));
        }
    }

    return 0;
}
