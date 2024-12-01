#include <stdio.h>

void atob(int a, int b, int tc) {
    printf("Case #%d: ", tc);
    while (a > 1) {
        if (a == b) {
            printf("YES\n");
            return;
        }
        if (a % 2 == 0) {
            a /= 2;  //even
        } else {
            a = a * 3 + 1;  //odd
        }
    }

    printf(a == b ? "YES\n" : "NO\n");
}

int main() {
    int t, i;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        int a, b;
        scanf("%d %d", &a, &b); 
        atob(a, b, i);
    }
    return 0;
}

