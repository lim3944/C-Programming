#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
int main(){
	int n, *score=0;
	printf("Number of students? : ");
	scanf("%d", &n);
	int sum = 0;
	score = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++){
		printf("Score of student %d : ", i);
		scanf("%d",score+i);
		sum = sum + *(score+i);
	}
	printf("Average score : %d", sum / n);
	return 0;
}