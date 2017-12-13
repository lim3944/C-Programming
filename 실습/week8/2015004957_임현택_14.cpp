#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int input, arr[1000];
	int i,max=0,min=1000000;
	printf("Input Array index : ");
	scanf("%d", &input);
	printf("Input %d numbers : ", input);
	for (i = 0; i < input; i++){
		scanf("%d", &arr[i]);
		if (arr[i]>max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	printf("maximum : %d\n", max);
	printf("minimum : %d\n", min);
	return 0;
}