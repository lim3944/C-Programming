#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int a, i, j;
	while (1){
		printf("Height : ");
		scanf("%d", &a);
		for (i = 0; i < a; i++){
			for (j = 0; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}
		
	}
	return 0;
}