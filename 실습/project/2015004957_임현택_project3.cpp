#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
#pragma warning(disable : 4996)

//학생 정보 구조체 리스트 선언
typedef struct record{
	char id[20];
	char name[20];
	char major[20];
	char phone[20];
	char hobby[20];
	struct record *next;
} student;
typedef student* link;

//input,search, delete, quit 함수 프로토 타입
link input(link);
void search(int, link);
void delete_all(link);
link del(int, link);
void quit(int*);


int main(){
	printf("*********************************\n");
	printf("*       Student Management      *\n");
	printf("*       Lim Hyun Tack           *\n");
	printf("*       2015004957              *\n");
	printf("*********************************\n\n\n\n");

	link start = NULL;//모든 리스트를 저장
	link node = NULL;//새로 받는 리스트를 저장
	int number = 0;
	int exit_check = 1;
	int *chk = &exit_check;


	while (exit_check){
		printf("\n1. Input a new student information\n2. Find a studnet using condition\n");
		printf("3. Delete a studnet using condition\n4. Quit\n");
		printf("Please enter the number >>");
		scanf("%d", &number);

		switch (number){
			//Input 메뉴
		case 1:{
			printf(">>1. selected input menu\n");
			if (start == NULL){
				start = (link)malloc(sizeof(student));
				start = input(start);
			}
			else {
				node = start;
				while (node->next != NULL)
					node = node->next;
				node->next = (link)malloc(sizeof(student));
				node = node->next;
				node = input(node);
			}
			break;
		}


		   //Search 메뉴
		case 2:{
			printf(">>2. selected find menu\n");
			printf("1) Full list\n");
			printf("2) Search by name\n");
			printf("3) Search by id\n");
			printf("4) Search by major\n");
			printf("5) Search by hobby\n");
			printf("6) Undo\n");
			printf("Please enter the number >> ");
			int n; scanf("%d", &n);
			if (n == 6)
				break;
			search(n, start);
			break;
		}

			   //Delete 메뉴
		case 3:{
			printf(">>3. selected delete menu\n");
			printf("1) Delete All\n");
			printf("2) Delete by name\n");
			printf("3) Delete by id\n");
			printf("4) Delete by major\n");
			printf("5) Delete by hobby\n");
			printf("6) Undo\n");
			printf("Please enter the number >> ");
			int n; scanf("%d", &n);
			if (n == 6)
				break;
			else if (n == 1){
				delete_all(start);
				start =node= NULL;
				break;
			}
			else {
				start=del(n, start);
				break;
			}
		}
		//Quit 메뉴
		case 4:{
			quit(chk);
			break;
		}
		}

		
	}
	return 0;
}



//Input 함수
link input(link temp){
		printf("1) id : "); scanf("%s", temp->id);
		printf("2) name : "); scanf("%s", temp->name);
		printf("3) major : "); scanf("%s", temp->major);
		printf("4) phone : "); scanf("%s", temp->phone);
		printf("5) hobby : "); scanf("%s", temp->hobby);
		printf(">>succeeded.\n");
		temp->next = NULL;
		return temp;
}


//Search 함수
void search(int n, link start){

	switch (n){
		//모든 리스트 출력
	case 1:{
		int i = 0;
		printf("\tID \tNAME \tMAJOR \tPHONE \tHOBBY\n");
		link tmp = NULL;
		tmp = start;
		for (tmp; tmp != NULL; tmp = tmp->next){
			printf("\t%s\t%s\t%s\t%s\t%s\n", tmp->id, tmp->name, tmp->major, tmp->phone, tmp->hobby);
			i++;
		}
		printf("%d student found\n", i);
		break;
	}
		   //이름으로 리스트 탐색
	case 2:{
		char temp[20];
		int i = 0;
		printf("Name >> "); scanf("%s", temp);
		printf("\tID \tNAME \tMAJOR \tPHONE \tHOBBY\n");
		link tmp = NULL;
		for (tmp = start; tmp != NULL; tmp = tmp->next){
			if (!strcmp(temp, tmp->name)){
				printf("\t%s\t%s\t%s\t%s\t%s\n", tmp->id, tmp->name, tmp->major, tmp->phone, tmp->hobby);
				i++;
			}
		}
		printf("%d student found\n", i);
		break;
	}
		   //아이디로 리스트 탐색
	case 3:{
		char temp[20];
		int i = 0;
		printf("ID >> "); scanf("%s", temp);
		printf("\tID \tNAME \tMAJOR \tPHONE \tHOBBY\n");
		link tmp = NULL;
		for (tmp = start; tmp != NULL; tmp = tmp->next){
			if (!strcmp(temp, tmp->id)){
				printf("\t%s\t%s\t%s\t%s\t%s\n", tmp->id, tmp->name, tmp->major, tmp->phone, tmp->hobby);
				i++;
			}
		}
		printf("%d student found\n", i);
		break;
	}
		   //전공으로 리스트 탐색
	case 4:{
		char temp[20];
		int i = 0;
		printf("Major >> "); scanf("%s", temp);
		printf("\tID \tNAME \tMAJOR \tPHONE \tHOBBY\n");
		link tmp = NULL;
		for (tmp = start; tmp != NULL; tmp = tmp->next){
			if (!strcmp(temp, tmp->major)){
				printf("\t%s\t%s\t%s\t%s\t%s\n", tmp->id, tmp->name, tmp->major, tmp->phone, tmp->hobby);
				i++;
			}
		}
		printf("%d student found\n", i);
		break;
	}
		   //취미로 리스트 탐색
	case 5:{
		char temp[20];
		int i = 0;
		printf("Hobby >> "); scanf("%s", temp);
		printf("\tID \tNAME \tMAJOR \tPHONE \tHOBBY\n");
		link tmp = NULL;
		for (tmp = start; tmp != NULL; tmp = tmp->next){
			if (!strcmp(temp, tmp->hobby)){
				printf("\t%s\t%s\t%s\t%s\t%s\n", tmp->id, tmp->name, tmp->major, tmp->phone, tmp->hobby);
				i++;
			}
		}
		printf("%d student found\n", i);
		break;
	}
	}
}

//전체 Delete 함수
void delete_all(link start)
{
	if (start != NULL)
	{
		delete_all(start->next);
		free(start);
	}
}



//나머지 Delete 함수
link del(int n, link start){
	link save=NULL;
	link tmp = NULL;
	switch (n){
		//이름으로 list 삭제
	case 2:{
		char temp[20];
		printf("Name >> "); scanf("%s", temp);
		save = tmp = start;
		while (start != NULL){
			if (!strcmp(temp, start->name)){
				if (start == save){
					tmp = start->next;
					free(start);
					start = tmp;
					save = start;
				}
				else{
					save->next = start->next;
					free(start);
					start = save->next;
				}
			}
			else{
				save = start;
				start = start->next;
			}
		}
		return tmp;
		break;
	}
		 //ID로 list 삭제
	case 3:{
		char temp[20];
		printf("ID >> "); scanf("%s", temp);
		save = tmp = start;
		while (start != NULL){
			if (!strcmp(temp, start->id)){
				if (start == save){
					tmp = start->next;
					free(start);
					start = tmp;
					save = start;
				}
				else{
					save->next = start->next;
					free(start);
					start = save->next;
				}
			}
			else{
				save = start;
				start = start->next;
			}
		}
		return tmp;
		break;
	}
	//전공으로 list 삭제
	case 4:{
		char temp[20];
		printf("Major >> "); scanf("%s", temp);
		save = tmp = start;
		while (start != NULL){
			if (!strcmp(temp, start->major)){
				if (start == save){
					tmp = start->next;
					free(start);
					start = tmp;
					save = start;
				}
				else{
					save->next = start->next;
					free(start);
					start = save->next;
				}
			}
			else{
				save = start;
				start = start->next;
			}
		}
		return tmp;
		break;
	}
	//취미로 list 삭제
	case 5:{
		char temp[20];
		printf("Hobby >> "); scanf("%s", temp);
		save = tmp = start;
		while (start != NULL){
			if (!strcmp(temp, start->hobby)){
				if (start == save){
					tmp = start->next;
					free(start);
					start = tmp;
					save = start;
				}
				else{
					save->next = start->next;
					free(start);
					start = save->next;
				}
			}
			else{
				save = start;
				start = start->next;
			}
		}
		return tmp;
		break;
	}
	}
}

//Quit 함수
void quit(int *chk){
	*chk = 0;
}