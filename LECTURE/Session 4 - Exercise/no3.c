#include <stdio.h>

int main(){
	char ss[40];
	scanf("%4s", ss);
	printf("%s", ss);
	//it will only store "good" cause of the format specifier %4s
	return 0;
}
