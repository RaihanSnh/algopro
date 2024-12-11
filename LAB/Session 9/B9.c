#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char s[101];
    int d;
} hero;

int cmp_asc(const void *a, const void *b) {
    return ((hero *)a)->d - ((hero *)b)->d;
}

int cmp_dsc(const void *a, const void *b) {
    return ((hero *)b)->d - ((hero *)a)->d;
}

int main() {
    int t;
    scanf("%d", &t);

    hero heroes[t];
    for (int i = 0; i < t; i++) {
        scanf("%s %d", heroes[i].s, &heroes[i].d);
    }

    char x[4];
    scanf("%s", x);

    if (strcmp(x, "asc") == 0) {
        qsort(heroes, t, sizeof(hero), cmp_asc);
    } else {
        qsort(heroes, t, sizeof(hero), cmp_dsc);
    }

    for (int i = 0; i < t; i++) {
        printf("%s %d\n", heroes[i].s, heroes[i].d);
    }

    return 0;
}
