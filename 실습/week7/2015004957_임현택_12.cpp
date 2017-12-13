#include<stdio.h>
#include<math.h>
#pragma warning(disable : 4996)
int main(){
	printf("Input & Number of Nth power\n");
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("sqrt()=%lf\n", sqrt(a));
	printf("log10()= %lf\n", log10(a));
	printf("abs()=%lf\n", abs(a));
	printf("power(,)=%lf\n", pow(a, b));
	return 0;
}