#include <stdio.h>

#define MAX 100001

int heap[MAX];
int size = 0;

void push(int x) {
    int idx = ++size;
    heap[idx] = x;

    while (idx > 1 && heap[idx] < heap[idx / 2]) {
        int temp = heap[idx];
        heap[idx] = heap[idx / 2];
        heap[idx / 2] = temp;
        idx /= 2;
    }
}

int pop(void) {
    if (size == 0) {
        return 0;
    }

    int min_value = heap[1];
    heap[1] = heap[size];
    size--;

    int idx = 1;
    while (1) {
        int left = idx * 2;
        int right = idx * 2 + 1;
        int smallest = idx;

        if (left <= size && heap[left] < heap[smallest]) {
            smallest = left;
        }

        if (right <= size && heap[right] < heap[smallest]) {
            smallest = right;
        }

        if (smallest == idx) {
            break;
        }

        int temp = heap[idx];
        heap[idx] = heap[smallest];
        heap[smallest] = temp;
        idx = smallest;
    }

    return min_value;
}

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        int x;
        scanf("%d", &x);

        if (x == 0) {
            printf("%d\n", pop());
        } else {
            push(x);
        }
    }

    return 0;
}