#include <stdio.h>

int main() {
    long long int num, digit1, digit2, digit3, sum;

    scanf("%lld", &num);

    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    sum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);

    printf((sum == num) ? "Woah!  It's an Armstrong Number!\n" : "Uh Oh.  It's not an Armstrong Number.\n");

    return 0;
}

