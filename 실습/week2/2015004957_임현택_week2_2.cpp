#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int n, i = 1;
	printf("Input number:\n");
	scanf("%d", &n);
	printf("****%d****\n", n);
	while (i < 10){
		printf("%d*%d = %d\n", n, i, n*i);
		i++;
	}
	printf("*********\n");
	return 0;
}