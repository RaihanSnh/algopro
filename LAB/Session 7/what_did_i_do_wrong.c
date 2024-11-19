#include <stdio.h>

int main() {
    int t, n, i, j; 
    int a[100], b[100];
    
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%d", &n);

        for (j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n; j++) {
            scanf("%d", &b[j]);
        }

        printf("Case #%d: ", i);
        for (j = 0; j < n; j++) {
            int result = a[j] - b[j];
            if (result > 0) {
                printf("%d", result);
            } else {
                printf("%d", result);
            }
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
