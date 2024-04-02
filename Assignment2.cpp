#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>    
int main() {

	int j, i, N;
	scanf("%d", &N);
	for (i = 1; i <= N; i += 1) {
		for (j = 1; j <= N - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j += 1) {
			printf("*");
		}
		printf("\n");
	}



	return 0;

}