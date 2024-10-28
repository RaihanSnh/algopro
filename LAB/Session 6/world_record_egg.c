#include <stdio.h>

int main() {
    int t, i;
    scanf("%d", &t);

    long long likes[91];
    likes[1] = 0;
    likes[2] = 1;

    for (i = 3; i <= 90; i++) {
        likes[i] = likes[i - 1] + likes[i - 2];
    }

    for (i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        printf("Case #%d: %lld\n", i, likes[n]);
    }

    return 0;
}
