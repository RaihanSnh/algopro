#include <stdio.h>

int calculate(int cuts) {
    return (cuts * cuts + cuts + 2) / 2;
}

int main() {
    int tc, n, i, j;
    
    scanf("%d", &tc);
    
    for (i = 1; i <= tc; i++) {
        scanf("%d", &n);
        
        printf("Case %d:", i);
        
        for (j = 0; j < n; j++) {
            printf(" %d", calculate(j));
        }
        printf("\n");
    }
    
    return 0;
}