#include <stdio.h>

int main() {
    int a, b, t, result1, result2, result3;

    scanf("%d", &t);

    scanf("%d %d", &a, &b);
    result1 = ((a / b) << b);

    scanf("%d %d", &a, &b);
    result2 = ((a / b) << b);
    

    scanf("%d %d", &a, &b);
    result3 = ((a / b) << b);
    
    printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
    return 0;
}
