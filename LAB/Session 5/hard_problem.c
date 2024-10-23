#include <stdio.h>
#include <string.h>

int main() {
    int tc, n, t, i;
    char s[101], k[101];
    
    scanf("%d", &tc);
    
    for (t = 1; t <= tc; t++) {
        scanf("%d", &n);
        
        scanf("%s", s);
        scanf("%s", k);
        
        int correct = 0;
        for (i = 0; i < n; i++) {
            if (s[i] == k[i]) {
                correct++;
            }
        }
        
        int grade = (correct * 100) / n;
        
        printf("Case #%d: %d\n", t, grade);
    }
    
    return 0;
}