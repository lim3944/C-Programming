#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	int i, j,a;
	a = 5;
	for (i = 1; i < a + 1; i++)//ù��° �� ���� ������ ���� �ٱ��� ǥ��
	{
		for (j = 0; j < a - i; j++)//���� ���� �ٸ� ���� ǥ��
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)//���� ���� �ٸ� *���� ǥ��
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = a - 1; i > 0; i--)//������ �ٽ� ������ �����ϴ� �ٺ��� ǥ��
	{
		for (j = a - i; j > 0; j--)//���� ���� �ٸ� ���� ǥ��
		{
			printf(" ");
		}
		for (j = 2 * i - 1; j > 0; j--)//���� ���� �ٸ� *���� ǥ��
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}