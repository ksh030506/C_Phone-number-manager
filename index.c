#include<stdio.h>
#include<stdlib.h> // 동적 함수
#include<string.h> // 문자열 함수

char NameDate[30][10]; // 이름 데이터
char TelDate[30][15];  // 전화번호 데이터

int index = 0;  // 증감 변수

void input();  // 등록 함수
void search();  // 검색 함수
void edit();  //수정 함수
void list(); // 전체 리스트 함수

void main()   // 메인
{
	char a;
	int select;

	printf("전화번호 관리 프로그램을 실행하시겠습니까?( Y / N )  ");
	scanf(" %c", &a);

	while (a == 'y' || a == 'Y')
	{
		printf("\n");
		printf("					     주소록 관리 시스템\n");
		printf("\n");
		printf("								1학년 1반 6번,8번\n");
		printf("								김상현, 김영환\n");
		printf("\n");
		printf("					lㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡl\n");   // 주소록 선택 화면
		printf("					l 1. 등록                  l\n");
		printf("					l 2. 검색                  l\n");
		printf("					l 3. 수정                  l\n");
		printf("					l 4. 전체 리스트 보기      l\n");
		printf("					l 5. 종료                  l\n");
		printf("					lㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡl\n");
		printf("\n");
		printf("위에 그림 중 숫자를 하나 선택하시오 : ");
		scanf("%d", &select);
		printf("\n");

		switch (select)  // 번호를 selecrt에 입력 받아서 각 함수로 이동
		{
		case 1:
			input();
			break;
		case 2:
			search();
			break;
		case 3:
			edit();
			break;
		case 4:
			list();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("잘못 입력하였습니다. 다시 입력 하세요\n");
		}
	}
}

void input()   //등록 함수
{
	printf("\n");
	printf("저장할 이름을 입력하세요 : ");
	scanf(" %s", &NameDate[index]);
	printf("저장할 전화번호를 입력하세요 : ");
	scanf(" %s", &TelDate[index]);
	printf(" 빠밤!!! 저장이 완료되었습니다.");
	printf("\n");
	++index;   // 이름과 전화번호 입력 받은 후 index 증가
	//여기서 index는 주소록에 저장된 사람의 수
}

void search()   //검색 함수
{
	int i = 0;
	char sea[15];

	printf("\n");
	printf("찾을 전화 번호의 이름을 입력 하세요: ");
	scanf("%s", &sea);

	for (i = 0; i < index; i++)    
		// 저장된 자료를 추가된 행 만큼 증감해서 찾음
	{   
		if (!strcmp(sea, NameDate[i]))  
			// 찾을 사람의 이름[sea] 입력한 값을 NameDate에서 찾아서 참이면 실행
		{
			printf("\n");
			printf("             연락처!!\n");
			printf("------------------------------------\n");
			printf("이름 : %s\n", NameDate[i]);
			printf("전화 번호 : %s\n", TelDate[i]);
			printf("------------------------------------\n");
		}
	}
}

void edit()   // 수정 함수
{
	int i = 0;
	char re[20];

	printf("\n");
	printf("수정 할 전화번호의 이름을 입력하세요 : ");
	scanf(" %s", &re);

	for (int i = 0; i < index; i++)       
		// 저장된 자료를 추가된 행 만큼 증감해서 찾음
	{ 
		if (!strcmp(re, NameDate[i]))  
			// 수정할 이름[re] 입력한 값을 NameDate에서 찾아 두 문자열이 같을 때 실행
		{
			printf("\n");
			printf("------------------------------------\n");
			printf("이름 : %s\n", NameDate[i]);
			printf("전화번호 : %s\n", TelDate[i]);
			printf("------------------------------------\n");
			printf("위 정보는 저장되어 있는 정보입니다.\n");
			printf("\n");
			printf("수정 할 전화번호 : ");
			scanf(" %s", &TelDate[i]);
			printf("  수정이 완료 되었습니다.!!");
		}
	}
}

void list() //전체 리스트 보기 함수
{
	printf("\n");
	printf("			    연락처!!!\n");
	printf("		-------------------------------\n");

	for (int i = 0; i < index; i++) 
	{
		printf("		이름 : %s\n", NameDate[i]);
		printf("		전화번호 : %s\n", TelDate[i]);
		printf("		-------------------------------\n");
	}
}
