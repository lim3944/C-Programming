#include<stdio.h>
int main(){
	int i=2, j=1;
	while (i <= 9){
		printf("*** %d ***\n", i);
		while (j <= 9){
			printf("%d * %d = %d\n", i, j, i*j);
			j++;
		}
		printf("\n");
		j = 1;
		i++;
	}
	return 0;
}