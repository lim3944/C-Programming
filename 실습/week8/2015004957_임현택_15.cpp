#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
int main(){
	int arri[20], arrs[20];
	int i, j, a, b, c;
	printf("initial values : ");
	for (i = 0; i < 18; i++)//�Է�
		scanf("%d", &arri[i]);
	for (i = 1; i < 18; i++){//����
		for (j = 1; j < 18; j++){
			if (arri[j-1]>=arri[j]){
				a = arri[j-1];
				arri[j-1] = arri[j];
				arri[j] = a;
			}
		}
	}
	printf("sort values :    ");
	for (i = 0; i < 18; i++)
		printf("%d ", arri[i]);
	j = 0;
	arrs[j] = arri[0];
	j++;
	for (i = 1; i < 18; i++){//���� ���� ����
		if (arri[i] == arri[i - 1])
			continue;
		else{
			arrs[j] = arri[i];
			j++;
		}
	}
	printf("\nDeduplication :  ");
	for (i = 0; i < j; i++)
		printf("%d ", arrs[i]);
	return 0;
}
