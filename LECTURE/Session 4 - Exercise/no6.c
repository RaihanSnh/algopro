#include <stdio.h>

int main() {
    float assignment, midExam, finalExam, finalScore;

    printf("input assignment score: ");
    scanf("%f", &assignment);

    printf("input mid exam score: ");
    scanf("%f", &midExam);

    printf("input final exam score: ");
    scanf("%f", &finalExam);

    finalScore = 0.2 * assignment + 0.3 * midExam + 0.5 * finalExam;

    printf("final score: %.2f\n", finalScore);

    return 0;
}
