#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    const char *str1 = (const char *)a;
    const char *str2 = (const char *)b;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 1; i <= len1 && i <= len2; i++) {
        char c1 = str1[len1 - i];
        char c2 = str2[len2 - i];
        if (c1 != c2) {
            return c1 - c2;
        }
    }

    return len1 - len2;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int case_no = 1; case_no <= t; case_no++) {
        int n;
        scanf("%d", &n);

        char strings[n][11];

        for (int i = 0; i < n; i++) {
            scanf("%s", strings[i]);
        }

        qsort(strings, n, sizeof(strings[0]), cmp);

        printf("Case #%d:\n", case_no);
        for (int i = 0; i < n; i++) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}
