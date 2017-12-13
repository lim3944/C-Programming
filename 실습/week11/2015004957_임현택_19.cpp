#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	char string[5][20];
	int len[5], abslen[5];

	strcpy_s(string[0], "abc");
	strcpy_s(string[1], "1");
	strcpy_s(string[2], "Hello world!");
	strcpy_s(string[3], "good");
	strcpy_s(string[4], "1500-1234");
	int i, j;
	for (i = 0; i < 5; i++){
		len[i] = strlen(string[i]);
	}
	sort(len, len + 5);

	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if (len[i] == strlen(string[j]))
				printf("%s\n", string[j]);
		}
	}
	return 0;
}
	