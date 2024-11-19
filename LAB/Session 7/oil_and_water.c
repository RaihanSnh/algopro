#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            arr[pos++] = arr[i];
        }
    }

    for (i = pos; i < n; i++) {
        arr[i] = 0;
    }

    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
