#include <stdio.h>

int main() {
char name [40];

int nim;

	char gender;
	printf("Name:"); 
	scanf("%[^\n]", &name); 
	printf("StudentNum:"); 
	scanf("%d", &nim); 
	printf("Gender (M/F):"); 
	gender = getchar();
	//after entering name and student num, program will exit beacause getchar() contains \n

return 0;
}
