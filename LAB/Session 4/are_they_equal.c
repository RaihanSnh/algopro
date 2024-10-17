#include <stdio.h>

int main() {
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    long long left = (long long)a * b;
    long long right = (long long)c - d;
    
    if (left == right) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
