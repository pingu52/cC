#include <stdio.h>

typedef struct {
    int weight;
    int height;
    int rank;
} Person;

int main() {
    int n;

    scanf("%d", &n);

    Person people[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &people[i].weight, &people[i].height);
        people[i].rank = 1; 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) { 
                if (people[i].weight < people[j].weight &&
                    people[i].height < people[j].height) {
                    people[i].rank++; 
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", people[i].rank);
    }
    return 0;
}