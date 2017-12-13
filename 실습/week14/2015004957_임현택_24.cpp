#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

struct list{
	int d;
	struct list *next;
};
typedef list *link;

int main(){
	int n;
	link start=NULL;
	link node = NULL;
	printf("Number? : ");
	scanf("%d", &n);
	if (n != -1){
		start = (link)malloc(sizeof(list));
		start->d = n;
		start->next = NULL;
	}
	
	while (1){
		if (n == -1)
			break;
		printf("Number? : ");
		scanf("%d", &n);
		if (n == -1)
			break;
		else{
			node = start;
			while (node->next != NULL)
				node = node->next;
			node->next = (link)malloc(sizeof(list));
			node = node->next;
			node->d = n;
			node->next = NULL;
		}
	}

	node = start;
	while (node != NULL){
		printf("%d, ", node->d);
		node = node->next;
	}
	return 0;
}