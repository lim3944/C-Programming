#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main(){
	char file[100];
	//���� �ҷ�����
	FILE *ifp = fopen("data.txt", "r+");
	fgets(file, 100, ifp);

	//��ҹ��ڹٲٱ�
	for (int i = 0; i < strlen(file); i++){
		if (isupper(file[i]))
			file[i] = tolower(file[i]);
		else
			file[i] = toupper(file[i]);
	}

	//������ ������ �ٽ� �̵�
	rewind(ifp);

	//���Ͽ� �����
	fputs(file, ifp);
	
	//���� �ݱ�
	fclose(ifp);

	return 0;
}

