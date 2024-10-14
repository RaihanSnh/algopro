#include <stdio.h>

int main() {
    long long n, total;

    scanf("%lld", &n);

    total = n * 100 + (n * (n--) / 2) * 50;

    printf("%lld\n", total);
    return 0;
}

