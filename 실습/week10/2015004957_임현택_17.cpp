#include<stdio.h>
#pragma warning(disable : 4996)
int main(){
	int arr[22][22] = { 0, };
	int i, j, a, b, n, chk[4] = { 0, };
	printf("Input a number : ");
	scanf("%d", &n);
	b = 1;
	
	for (i = 0; i < 2 * n - 1; i++){
		a = i % 4;//�����̰� ���ư��� ������ 4������ ����
		switch (a){
		case 0:{//���������ΰ���
			for (j = chk[a]; j < n - chk[a]; j++){
				arr[chk[a]][j] = b;
				b++;
			}
			chk[a]++;
			break; }
		case 1:{//�Ʒ��ΰ���
			for (j = 1 + chk[a]; j < n -1- chk[a]; j++){
				arr[j][n - 1-chk[a]] = b;
				b++;
			}
			chk[a]++;
			break; }
		case 2:{//�������ΰ���
			for (j = n - 1 - chk[a]; j > chk[a]; j--){
				arr[n - 1 - chk[a]][j] = b;
				b++;
			}
			chk[a]++;
			break; }
		case 3:{//�ö󰥶�
			for (j = n  -1 -chk[a]; j > chk[a]; j--){
				arr[j][chk[a]] = b;
				b++;
			}
			chk[a]++;
			break; }
		}
	}

	if (n % 2 == 0)//n�� ¦���ΰ�� ���� �߰�
		arr[n / 2][n / 2 - 1] = b;

	for (i = 0; i < n; i++){//���
		for (j = 0; j < n; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
	return 0;
}