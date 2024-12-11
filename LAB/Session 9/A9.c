#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int r;
    char m[41];
} plant;

int cmp(const void *a, const void *b) {
    return strcmp(((plant *)a)->m, ((plant *)b)->m);
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    if (!fp) {
        perror("Failed to open file");
        return 1;
    }

    int n;
    fscanf(fp, "%d", &n);

    plant plants[n];
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d#%[^\n]", &plants[i].r, plants[i].m);
    }
    fclose(fp);

    qsort(plants, n, sizeof(plant), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", plants[i].r, plants[i].m);
    }

    return 0;
}
