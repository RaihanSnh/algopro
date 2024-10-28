#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n+5][n+5];
    int count[n+5];
    memset(count, 0, sizeof(count));
    for(i = 0;i < n;i++){
    	for(j = 0;j < n;j++){
    		scanf("%d", &arr[i][j]);
    		count[arr[i][j]]++;
		}
	}
    int tidak_lengkap = 0;
    for(i = 1; i <= n;i++){
    	if(count[i]<n){
    		tidak_lengkap++;
		}
	}
	printf("%d\n", tidak_lengkap);
	
    return 0;
}