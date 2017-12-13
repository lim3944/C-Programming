#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main(){
	char file[100];
	//파일 불러오기
	FILE *ifp = fopen("data.txt", "r+");
	fgets(file, 100, ifp);

	//대소문자바꾸기
	for (int i = 0; i < strlen(file); i++){
		if (isupper(file[i]))
			file[i] = tolower(file[i]);
		else
			file[i] = toupper(file[i]);
	}

	//포인터 앞으로 다시 이동
	rewind(ifp);

	//파일에 덮어쓰기
	fputs(file, ifp);
	
	//파일 닫기
	fclose(ifp);

	return 0;
}

