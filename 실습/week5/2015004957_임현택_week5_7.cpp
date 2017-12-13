#include<stdio.h>
#pragma warning(disable : 4996)
/*function prototype*/
int Input(void);
int Add(int, int);

int main(){
	int a, b, sum;
	a = Input();
	b = Input();
	sum = Add(a, b);
	printf("%d", sum);
	return 0;
}
/*function definition*/
int Input(void){
	int a;
	scanf("%d", &a);
	return a;
}
int Add(int a, int b){
	return a + b;
}