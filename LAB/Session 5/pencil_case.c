#include <stdio.h>

#define PI 3.14
double area(int radius, int height) {
    return 2 * PI * radius * (radius + height);
}

int main() {
    int tc, i, r, h;
    
    scanf("%d", &tc);
    
    for (i = 1; i <= tc; i++) {
        scanf("%d %d", &r, &h);
        
        double surfaceArea = area(r, h);
        
        printf("Case #%d: %.2f\n", i, surfaceArea);
    }
    
    return 0;
}