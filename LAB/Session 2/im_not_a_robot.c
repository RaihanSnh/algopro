#include <stdio.h>

int main() {
    float a, b, percentage;

    scanf("%f %f", &a, &b);

    percentage = (b / a) * 100;

    printf("%.4f%%\n", percentage);
    return 0;
}

