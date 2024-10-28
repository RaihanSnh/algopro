#include <stdio.h>

int main() {
    int t, c, i, j;
    scanf("%d", &t);
    
    for (c = 1; c <= t; c++) {
        int n, m, q;
        scanf("%d %d %d", &n, &m, &q);

        int pattern[50][50] = {0};
        int lights[50] = {0};

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &pattern[i][j]);
            }
        }

        for (i = 0; i < q; i++) {
            int friend;
            scanf("%d", &friend);
            friend--;

            for (j = 0; j < m; j++) {
                if (pattern[friend][j] == 1) {
                    lights[j] ^= 1;
                }
            }
        }
        
        printf("Case #%d:\n", c);
        for (i = 0; i < m; i++) {
            if (lights[i] == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}
