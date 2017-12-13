#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
int main(){
	printf("Input the nuber to check : ");
	int n;
	scanf("%d", &n);
	char string1[100], string2[100];
	printf("Inputthe string1 : ");
	scanf("%s", string1);
	printf("Input the string2 : ");
	scanf("%s", string2);

	int cnt = 0;//몇개까지 일치하나 저장
	for (int i = 1; i <= n; i++){//문자열 비교
		if (!strncmp(string1, string2, i))
			cnt = i;
	}
	if (cnt > strlen(string1))//문자열이 일치하는 경우
		printf("equal\n");
	else if (strlen(string1) == strlen(string2) && strlen(string1) == cnt)
		printf("equal\n");

	else if (!cnt)
		printf("not equal\n");

	else
		printf("equal %d character\n", cnt);
	return 0;
}