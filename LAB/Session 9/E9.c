#include <stdio.h>
#include <string.h>

int main() {
    int n, x;
    char words[1000][101];

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int cmp = strcmp(words[j], words[j + 1]);
            if ((x == 0 && cmp > 0) || (x != 0 && cmp < 0)) {
                char temp[101];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
