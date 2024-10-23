#include <stdio.h>

int main() {
    int tc, t, n, m, i;
    int price, min_price;
    min_price = 1000000001;
    
    scanf("%d", &tc);
    
    for (t = 1; t <= tc; t++) {
        scanf("%d %d", &n, &m);
        
        for (i = 0; i < n; i++) {
            scanf("%d", &price);
            if (price < min_price) {
                min_price = price;
            }
        }
        
        int max_candies = m / min_price;
        
        printf("Case #%d: %d\n", t, max_candies);
    }
    
    return 0;
}