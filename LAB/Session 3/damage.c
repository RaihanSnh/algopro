#include <stdio.h>

int main(){
	float a, b ,c;
	scanf("%f %f %f", &a, &b, &c);
	a = a * (20.0 / 100.0);
	b = b * (30.0 / 100.0);
	c = c * (50.0 / 100.0);
	printf("%.2f\n", a+b+c);
	return 0;
}
