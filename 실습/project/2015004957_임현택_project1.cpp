#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	int i, j,a;
	a = 5;
	for (i = 1; i < a + 1; i++)//첫번째 줄 부터 공백이 없는 줄까지 표현
	{
		for (j = 0; j < a - i; j++)//층에 따라 다른 공백 표현
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)//층에 따라 다른 *개수 표현
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = a - 1; i > 0; i--)//공백이 다시 나오기 시작하는 줄부터 표현
	{
		for (j = a - i; j > 0; j--)//층에 따라 다른 공백 표편
		{
			printf(" ");
		}
		for (j = 2 * i - 1; j > 0; j--)//층에 따라 다른 *개수 표현
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}