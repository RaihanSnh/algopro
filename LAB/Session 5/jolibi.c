#include <stdio.h>

int main() {
    int n, i, jojo, lili, bibi;
    int sum = 0;
    float average;

    scanf("%d", &n);
    scanf("%d %d %d", &jojo, &lili, &bibi);

    sum = jojo + lili + bibi;

    for (i = 0; i < n; i++) {
        int score;
        scanf("%d", &score);
        sum += score;
    }

    average = (float)sum / (n + 3);

    printf("%s\n", (jojo >= average) ? "Jojo lolos" : "Jojo tidak lolos");
    printf("%s\n", (lili >= average) ? "Lili lolos" : "Lili tidak lolos");
    printf("%s\n", (bibi >= average) ? "Bibi lolos" : "Bibi tidak lolos");

    return 0;
}