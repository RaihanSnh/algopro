#include <stdio.h>
#include <string.h>

int main(){
	char name[500];
	fgets(name, sizeof(name), stdin);
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }
	printf("\"Hello %s!  Welcome to C Programming!\"", name);
	return 0;
}
