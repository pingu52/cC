#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    int arr[300000];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), compare);
    
    int cut = (int)(n * 0.15 + 0.5);
    
    int sum = 0;
    int count = n - 2 * cut;
    
    for (int i = cut; i < n - cut; i++) {
        sum += arr[i];
    }
    printf("%d\n", (int)((double)sum / count + 0.5));
    
    return 0;
}