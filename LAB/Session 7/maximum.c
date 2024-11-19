#include <stdio.h>

int main() {
    int t, tc, i;
    scanf("%d", &t);

    for (tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);

        int max1 = -1000001;
        int max2 = -1000001; 

        for (i = 0; i < n; i++) {
            int v;
            scanf("%d", &v);

            if (v > max1) {
                max2 = max1; 
                max1 = v; 
            } else if (v > max2) {
                max2 = v;
            }
        }

        printf("Case #%d: %d\n", tc, max1 + max2);
    }

    return 0;
}
