#include<stdio.h>

int main(){
	int i, j,swap;
	int arr[20] = { 0, 1, 5, 4, 2, 5, 7, 8, 3, 4, 5, 1, 1, 2, 3, 6, 7, 8 };
	printf("initial values : ");
	for (i = 0; i < 18; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 0; i < 18; i++){
		printf("\nproess %d:\t", i);
		for (j = 1; j < 18; j++){
			if (arr[j - 1] > arr[j]){
				swap = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = swap;
			}
		}
		for (j = 0; j < 18; j++)
			printf("%d ", arr[j]);
	}
	printf("\n\nsort values :   ");
	for (i = 0; i < 18;i++)
		printf("%d ", arr[i]);
	int ded[20];
	j = 1;
	ded[0] = arr[0];
	for (i = 1; i < 18; i++){
		if (ded[j - 1] == arr[i])
			continue;
		else
			ded[j] = arr[i];
		j++;
	}
	printf("\nDeduplication : ");
	for (i = 0; i < j; i++)
		printf("%d ", ded[i]);
	return 0;
}