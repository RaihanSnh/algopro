#include <stdio.h>

int fib(int n) {
    if (n <= 1) 
        return 1; 
    return fib(n - 1) + fib (n - 2) + 1;
}

int main() {
    int t, n, i;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%d", &n); 
        int res = fib(n);
        printf("Case #%d: %d\n", i, res);
    }

    return 0;
}
