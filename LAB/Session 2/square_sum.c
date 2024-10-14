#include <stdio.h>

int main() {
    float a, b, c, d;

    scanf("%f %f %f %f", &a, &b, &c, &d); 
    float sum1 = (a / 1 * 2) + (b / 2 * 4) + (c / 3 * 6) + (d / 4 * 4);

    scanf("%f %f %f %f", &a, &b, &c, &d); 
    float sum2 = (a / 1 * 2) + (b / 2 * 4) + (c / 3 * 6) + (d / 4 * 4);

    scanf("%f %f %f %f", &a, &b, &c, &d); 
    float sum3 = (a / 1 * 2) + (b / 2 * 4) + (c / 3 * 6) + (d / 4 * 4);

    printf("%.2f\n", sum1);
    printf("%.2f\n", sum2);
    printf("%.2f\n", sum3);

    return 0;
}

