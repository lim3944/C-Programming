#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int max = 0, min = 9999;
	int random, i;
	srand(time(NULL));
	for (i = 0; i < 10;i){
		random = rand();
		if (random > 1000||random<1)
			continue;
		else{
			printf("%d ", random);
			i++;
		}
		if (random > max)
			max = random;
		if (random < min)
			min = random;
	}
	printf("\nMaximum number is %d\n", max);
	printf("Minimum numbr is %d\n", min);
	return 0;
}
