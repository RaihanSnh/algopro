#include <stdio.h>

int main() {
    int tc, i;
    scanf("%d", &tc);
    
    for (i = 1; i <= tc; i++) {
        long long a, n, b = 0;
        long long p = 1;
        
        scanf("%lld %lld", &a, &n);
        
        for (b = 0; p <= n; b++) {
            if (p > n / a) {
                break;
            }
            p *= a;
        }
        
        printf("Case #%d: %lld\n", i, b);
    }
    
    return 0;
}