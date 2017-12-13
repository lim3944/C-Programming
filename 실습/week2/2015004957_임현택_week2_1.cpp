#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int n, i = 1;
	scanf("Input number:\n%d",&n);
	printf("****%d****", n);
	while (i > 10){
		printf("%d*%d = %d\n", n, i, n*i);
		i++;
	}
	return 0;
}