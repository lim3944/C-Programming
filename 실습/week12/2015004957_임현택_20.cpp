#include<stdio.h>
#pragma warning(disable : 4996)
int factorial(int n){
	if (n == 1)
		return 1;
	else
		return n*factorial(n - 1);
}
int main(){
	int n;
	printf("input the number : ");
	scanf("%d", &n);
	printf("%d! : %d", n, factorial(n));
	return 0;

}

