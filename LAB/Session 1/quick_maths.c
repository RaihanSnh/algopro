#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d", &a);
	b = a + a;
	c = b - 1;
	printf("%d plus %d is %d\nminus one is %d\n", a, a, b, c);
	return 0;
}
