#include<stdio.h>
#pragma warning(disable : 4996)
int fibo(int);
int main(){
	int input2,i;
	while (1){
		int input1;
		printf("****************\n");
		printf("1. Calculate\n2. Show it!\n3. Initialize\n4. Quit\n");
		printf("****************\n");
		printf("Input : ");
		scanf("%d", &input1);
		if (input1 == 4)
			break;
		switch (input1){
		case 1:{
			printf("Input the number : ");
			scanf("%d", &input2);
			break;
		}
		case 2:{
			int i;
			for (i = 0; i < input2; i++)
				printf("%d ", fibo(i));
			printf("\n");
			break;
		}
		case 3:{
			input2 = 0;
			break;
		}
		}
	}
	return 0;
}
int arr[100000];
int fibo(int n)
{
	int i;
	arr[1] = 1;
	for (i = 2; i <= 45; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
}