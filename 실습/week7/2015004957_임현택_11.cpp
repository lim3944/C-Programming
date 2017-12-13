#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	while (1){
		int a;
		printf("Input Alphabet :");
		a = getchar();
		fflush(stdin);
		if (a>=97&&a<=122){
			printf("Result :");
			putchar(a-32);
			printf("\n");
		}
		else if (a>=65&&a<=90){
			printf("Result :");
			putchar(a+32);
			printf("\n");
		}
		else
			printf("Wrong input ! try again\n");
	}
	return 0;
}
