#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

typedef char DATA;//linked list 구조체 선언
struct linked_list{
	DATA d;
	struct linked_list *next;
};
typedef struct linked_list ELEMENT;
typedef ELEMENT *LINK;

LINK string_to_list(char s[]){//문자열을 리스트로 바꾸는 함수
	LINK head;
	if (s[0] == '\0')
		return NULL;
	else {
		head = (LINK)malloc(sizeof(ELEMENT));
		head->d = s[0];
		head->next = string_to_list(s + 1);
		return head;
	}
}

int count(LINK head){//list의 길이 세는 함수
	if (head == NULL)
		return 0;
	else
		return (1 + count(head->next));
}

LINK lookup(DATA c, LINK head){//list의 내용을 찾는 함수
	if (head == NULL)
		return NULL;
	else if (c == head->d)
		return head;
	else
		return (lookup(c, head->next));
}

int main(){
	
	int n;
	LINK list,temp;
	char s[10000],k[2];
	while (1){
		printf("----------Menu----------\n");
		printf("1. String to list\n");
		printf("2. Show the list\n");
		printf("3. Lookup\n");
		printf("4. Count\n");
		printf("5. Exit\n");
		printf("Choose the item : ");
		scanf("%d", &n);
		switch (n){
		case 1:{
			printf("Input a string : ");
			scanf("%s", s);
			printf("\n");
			list=string_to_list(s);
			break;
		}
		case 2:{
			printf("List : ");
			for (temp = list; temp != NULL; temp=temp->next)
				printf("%c ", temp->d);
			printf("\n");
			break;
		}
		case 3:{
			printf("Find a character : ");
			scanf("%s", k);
			if (lookup(k[0], list) == NULL)
				printf("%c is not in the list\n", k[0]);
			else
				printf("%c is in the list\n", k[0]);
			break;
		}
		case 4:{
			printf("string legth : %d\n", count(list));
			break;
		}
		}
		if (n == 5)
			break;
	}
	return 0;
}

