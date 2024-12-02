#include <stdio.h>
#include <string.h>

char permutations[100][10];
int permutation_count = 0;

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void generate_permutations(char *array, int length) {
    int state[length], i;
    for (i = 0; i < length; i++) state[i] = 0;

    strcpy(permutations[permutation_count++], array);

    int index = 0;
    while (index < length) {
        if (state[index] < index) {
            if (index % 2 == 0) {
                swap(&array[0], &array[index]);
            } else {
                swap(&array[state[index]], &array[index]);
            }
            strcpy(permutations[permutation_count++], array);
            state[index]++;
            index = 0;
        } else {
            state[index] = 0;
            index++;
        }
    }
}

void sort_permutations(int count) {
	int i, j;
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (strcmp(permutations[j], permutations[j + 1]) > 0) {
                char temp[10];
                strcpy(temp, permutations[j]);
                strcpy(permutations[j], permutations[j + 1]);
                strcpy(permutations[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    char arr[n + 1];

    for (i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
    arr[n] = '\0';

    generate_permutations(arr, n);
    sort_permutations(permutation_count);

    for (i = 0; i < permutation_count; i++) {
        printf("%s\n", permutations[i]);
    }
    return 0;
}

