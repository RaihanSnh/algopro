#include <stdio.h>

int main() {
    int n, m, i;
    
    scanf("%d %d", &n, &m);
    
    for (i = 0; i <= m; i++) {
        printf("%d\n", n + i);
    }
    
    return 0;
}