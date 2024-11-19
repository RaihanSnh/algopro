#include <stdio.h>

int main() {
    int n, i, j, ans = 0;
    long long x[100], y, temp;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%lld", &x[i]);
    }
    
    scanf("%lld", &y);
    
    for (i = 0; i < n; i++) {
        if (y >= x[i]) {
            ans++;
            y -= x[i];
        } else {
            break;
        }
    }
    
    printf("%d\n", ans);

    return 0;
}
