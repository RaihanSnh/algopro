#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int a[1000], b[1000], result[1000];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    for (i = 0; i < n; i++) {
        result[a[i]] = b[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
