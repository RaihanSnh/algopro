#include <stdio.h>

int main() {
    int t, i, a, b;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        
        int res = 0;
        int m = 1;
        
        while (a > 0 || b > 0) {
            int da = a % 10;
            int db = b % 10;
            int s = (da + db) % 10;
            
            res = s * m + res;
            m *= 10;
            
            a /= 10;
            b /= 10;
        }
        
        printf("Case #%d: %d\n", i, res);
    }

    return 0;
}
