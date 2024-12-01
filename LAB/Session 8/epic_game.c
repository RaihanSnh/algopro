#include <stdio.h>

int main() {
    int t, i;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        long long n;
        int count = 0;
        scanf("%lld", &n);

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;  // even
            } else {
                n = n * 3 + 1; //odd
            }
            count++;
        }

        printf("Case #%d: %s\n", i, (count % 2 == 0) ? "Lili" : "Jojo");
    }
    return 0;
}

