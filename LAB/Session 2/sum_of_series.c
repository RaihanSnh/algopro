#include <stdio.h>

int main() {
    long long int a, b, n, sum;

    scanf("%lld %lld", &a, &b);

    n = b - a + 1;
    sum = n * (a + b) / 2;

    printf("%lld\n", sum);

    return 0;
}

