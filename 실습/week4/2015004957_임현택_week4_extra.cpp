#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int answer = 47,guess;
	int count=1;
	printf("I'm thinking of a number between and including 1 to 100.\nCan you guess the number in 6 tries?\n");
	while (1){
		printf("Enter guess number %d : ",count);
		scanf("%d", &guess);
		if (guess > answer){
			printf("Too high!\n");
			count++;
		}
		else if (guess == answer){
			printf("That's Correct!\n");
			break;
		}
		else {
			printf("Too low!\n");
			count++;
		}

		if (count > 6){
			printf("Sorry, bye bye~\n");
			break;
		}

	}
		return 0;
}

