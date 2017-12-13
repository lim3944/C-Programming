#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int a, i, j;
	while (1){
		printf("Height : ");
		scanf("%d", &a);
		for (i = a; i > 0; i--){
			for (j = 1; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}