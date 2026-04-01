#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXV 10000

static uint64_t seed;

/* xorshift RNG */
uint32_t rng(void) {
    seed ^= seed << 13;
    seed ^= seed >> 7;
    seed ^= seed << 17;
    return (uint32_t)seed;
}

void shuffle(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rng() % (i + 1);
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

int ask(char who, int x) {
    int resp;
    printf("? %c %d\n", who, x);
    fflush(stdout);

    if (scanf("%d", &resp) != 1) {
        exit(0);
    }
    return resp;
}

int main(void) {
    int orderA[MAXV];
    int orderB[MAXV];

    for (int i = 0; i < MAXV; i++) {
        orderA[i] = i + 1;
        orderB[i] = i + 1;
    }

    seed = (uint64_t)time(NULL) ^ (uintptr_t)&seed;

    shuffle(orderA, MAXV);
    shuffle(orderB, MAXV);

    int A = -1, B = -1;
    int used = 0;

    /* A 찾기: 최대 9999번 */
    int foundA = 0;
    for (int i = 0; i < 9999; i++) {
        used++;
        if (ask('A', orderA[i]) == 1) {
            A = orderA[i];
            foundA = 1;
            break;
        }
    }
    if (!foundA) {
        A = orderA[9999];
    }

    /* 남은 질문 수 */
    int remain = 19997 - used;
    int limitB = remain < 9999 ? remain : 9999;

    int foundB = 0;
    for (int i = 0; i < limitB; i++) {
        if (ask('B', orderB[i]) == 1) {
            B = orderB[i];
            foundB = 1;
            break;
        }
    }

    if (!foundB) {
        if (limitB == 9999) {
            /* 마지막 1개 남음 */
            B = orderB[9999];
        } else {
            /* 마지막 2개 남음: 랜덤으로 하나 선택 */
            int cand1 = orderB[9998];
            int cand2 = orderB[9999];
            B = (rng() & 1) ? cand1 : cand2;
        }
    }

    printf("! %d\n", A + B);
    fflush(stdout);

    return 0;
}