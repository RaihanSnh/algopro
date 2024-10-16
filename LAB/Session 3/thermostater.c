#include <stdio.h>

int main() {
    int t = 3;
    int a1, a2, a3;
    float reaumur, fahrenheit, kelvin;
    
    scanf("%d", &t);
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);
    reaumur = (4.0 / 5.0) * a1;
    fahrenheit = (9.0 / 5.0) * a1 + 32;
    kelvin = a1 + 273;
    printf("%.2f %.2f %.2f\n", reaumur, fahrenheit, kelvin);
    
    
    reaumur = (4.0 / 5.0) * a2;
    fahrenheit = (9.0 / 5.0) * a2 + 32;
    kelvin = a2 + 273;
    printf("%.2f %.2f %.2f\n", reaumur, fahrenheit, kelvin);

    
    reaumur = (4.0 / 5.0) * a3;
    fahrenheit = (9.0 / 5.0) * a3 + 32;
    kelvin = a3 + 273;
    printf("%.2f %.2f %.2f\n", reaumur, fahrenheit, kelvin);
    
    return 0;
}
