#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Meeting;

int compare(const void *a, const void *b) {
    Meeting *x = (Meeting *)a;
    Meeting *y = (Meeting *)b;

    if (x->end == y->end) {
        return x->start - y->start;
    }
    return x->end - y->end;
}

int main() {
    int n;
    scanf("%d", &n);

    Meeting meetings[100000];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &meetings[i].start, &meetings[i].end);
    }

    qsort(meetings, n, sizeof(Meeting), compare);

    int count = 0;
    int end_time = 0;

    for (int i = 0; i < n; i++) {
        if (meetings[i].start >= end_time) {
            count++;
            end_time = meetings[i].end;
        }
    }

    printf("%d\n", count);
    return 0;
}