#include <stdio.h>

int main() {
    int friendTotal, i, opinion;
    int isHard = 0;
    
    scanf("%d", &friendTotal);
    
    for (i = 0; i < friendTotal; i++) {
        scanf("%d", &opinion);
        
        if (opinion == 1) {
            isHard = 1;
            break;
        }
    }
    
    if (isHard) {
        printf("not easy\n");
    } else {
        printf("easy\n");
    }

    return 0;
}

