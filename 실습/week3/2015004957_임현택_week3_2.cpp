#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int n, i,k;
	printf("input number : ");
	scanf("%d", &n);
	k = n;
	i = 1;
	while (i <= 10){
		printf("%d\t", k);
		k *= n;
		i++;
	}
	return 0;
}