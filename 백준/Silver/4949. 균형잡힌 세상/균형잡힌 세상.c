#include <stdbool.h>
#include <stdio.h>

int main() {
    char str[102];

    while (1) {
        fgets(str, sizeof(str), stdin);

        if (strcmp(str, ".\n") == 0 || strcmp(str, ".") == 0) {
            break;
        }

        char stack[102];
        int top = -1;
        bool balanced = true;

        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];

            if (ch == '(' || ch == '[') {
                stack[++top] = ch;
            } else if (ch == ')') {
                if (top == -1 || stack[top] != '(') {
                    balanced = false;
                    break;
                }
                top--;
            } else if (ch == ']') {
                if (top == -1 || stack[top] != '[') {
                    balanced = false;
                    break;
                }
                top--;
            }
        }

        if (balanced && top == -1) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}