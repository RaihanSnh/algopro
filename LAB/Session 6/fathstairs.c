#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    int num = 1;
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", num);
            } else {
                printf(" %d", num);
            }
            num++;
        }
        printf("\n");
    }
    
    return 0;
}