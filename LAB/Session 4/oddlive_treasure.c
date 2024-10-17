#include <stdio.h>

int main() {
    long long int a, b, i;
    scanf("%lld %lld", &a, &b);
    
    if (a % 2 != 0) {
        a += 2;
    } else {
        a++;
    }
    long long int sum = 0;
//    while (a < b){
//    	sum += a;
//    	a +=2;
//	}
    for (i = a; i < b; i += 2) {
        sum += i;
    }

    printf("%lld\n", sum);
    
    return 0;
}
