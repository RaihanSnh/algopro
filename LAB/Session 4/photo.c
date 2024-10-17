#include <stdio.h>

int main(){
	int tc, i , j, k;
	scanf("%d", &tc);
	
	for(i = 1; i <= tc; i++){
		printf("Case #%d: \n", i);
		int heights, widths; 
		scanf("%d %d", &heights, &widths);
		for(j = 1; j <= heights; j++){
			for(k = 1; k <= widths; k++){
				if(j == 1 || j == heights || k == 1 || k == widths){
					printf("#");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
