#include <stdio.h>
#include <string.h>

int get_bit(int x) { return 1 << (x - 1); }

void add_bit(int *s, int x) { *s |= get_bit(x); }

void remove_bit(int *s, int x) { *s &= ~get_bit(x); }

int check_bit(int s, int x) { return (s & get_bit(x)) ? 1 : 0; }

void toggle_bit(int *s, int x) { *s ^= get_bit(x); }

int main() {
    int m;
    scanf("%d", &m);

    int s = 0;
    char str[10];
    int x;

    while (m--) {
        scanf("%s", str);

        if (strcmp(str, "add") == 0) {
            scanf("%d", &x);
            add_bit(&s, x);
        } else if (strcmp(str, "remove") == 0) {
            scanf("%d", &x);
            remove_bit(&s, x);
        } else if (strcmp(str, "check") == 0) {
            scanf("%d", &x);
            printf("%d\n", check_bit(s, x));
        } else if (strcmp(str, "toggle") == 0) {
            scanf("%d", &x);
            toggle_bit(&s, x);
        } else if (strcmp(str, "all") == 0) {
            s = (1 << 20) - 1;
        } else if (strcmp(str, "empty") == 0) {
            s = 0;
        }
    }

    return 0;
}