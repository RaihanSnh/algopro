#include <stdio.h>
#include <math.h>

int main() {
    int t, i;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        double left_side = b * log(a);      // ab ? b * log(a)
        double right_side = c * log(M_E);   // ec ? c * log(e) = c

        printf("Case #%d: ", i);
        if (left_side > right_side) {
            printf(">\n");
        } else {
            printf("<\n");
        }
    }
    return 0;
}

