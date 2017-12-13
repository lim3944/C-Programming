#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	while (1){
		char a;
		printf("Input Alphabet :");
		scanf("%c", &a);
		fflush(stdin);
		if (a >= 97 && a<=122)
			printf("Result : %c\n", a - 32);
		else if (a >= 65 && a <= 90)
			printf("Result : %c\n", a + 32);
		else
			printf("Wrong input ! try again\n");
	}
	return 0;
}