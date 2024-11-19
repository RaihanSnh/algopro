#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int t, n, i, j, res, a[100]; 

    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%d", &n);

        for (j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        res = a[0];
        for (j = 1; j < n; j++) {
            res = gcd(res, a[j]);
        }

        printf("Case #%d: %d\n", i, res);
    }

    return 0;
}
