#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("You can win the first prize at lotto!!\n");
	int i, lotto;
	srand(time(NULL));
	for (i = 0; i < 6; i++){
		lotto = rand();
		printf("%d ", lotto % 45+1);
	}
	return 0;
}