#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[101];
    int order;
} Member;

int compare(const void *a, const void *b) {
    Member *m1 = (Member *)a;
    Member *m2 = (Member *)b;

    if (m1->age < m2->age) {
        return -1;
    } else if (m1->age > m2->age) {
        return 1;
    } else {
        if (m1->order < m2->order)
            return -1;
        else if (m1->order > m2->order)
            return 1;
        else
            return 0;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    Member *arr = (Member *)malloc(N * sizeof(Member));
    if (!arr) {
        fprintf(stderr, "malloc err\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &arr[i].age, arr[i].name);
        arr[i].order = i;
    }

    qsort(arr, N, sizeof(Member), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", arr[i].age, arr[i].name);
    }

    free(arr);
    return 0;
}
