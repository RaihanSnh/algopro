#include <stdio.h>

int main() {
    int tc, n, m, t, i;
    scanf("%d", &tc);
    
    for(t = 1; t <= tc; t++) {
        scanf("%d %d", &n, &m);
        
        long long cost = 0;
        for(i = 0; i < n; i++) {
            int price;
            scanf("%d", &price);
            cost += price;
        }
        printf("Case #%d: %s\n", t, cost <= m ? "No worries" : "Wash dishes");
    }
    
    return 0;
}