#include <stdio.h>

int main() {
    int test_case, male, female, i;
    
    scanf("%d", &test_case);
    
    for (i = 1; i <= test_case; i++) {
        scanf("%d %d", &male, &female);
        printf("Case #%d: ", i);
        if ((male % 2 == 1) && (female % 2 == 1)) {
            printf("Need more frogs\n");
        } else {
            printf("Party time!\n");
        }
    }
    
    return 0;
}