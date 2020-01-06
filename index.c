#include<stdio.h>
#include<stdlib.h> // ���� �Լ�
#include<string.h> // ���ڿ� �Լ�

char NameDate[30][10]; // �̸� ������
char TelDate[30][15];  // ��ȭ��ȣ ������

int index = 0;  // ���� ����

void input();  // ��� �Լ�
void search();  // �˻� �Լ�
void edit();  //���� �Լ�
void list(); // ��ü ����Ʈ �Լ�

void main()   // ����
{
	char a;
	int select;

	printf("��ȭ��ȣ ���� ���α׷��� �����Ͻðڽ��ϱ�?( Y / N )  ");
	scanf(" %c", &a);

	while (a == 'y' || a == 'Y')
	{
		printf("\n");
		printf("					     �ּҷ� ���� �ý���\n");
		printf("\n");
		printf("								1�г� 1�� 6��,8��\n");
		printf("								�����, �迵ȯ\n");
		printf("\n");
		printf("					l�ѤѤѤѤѤѤѤѤѤѤѤѤ�l\n");   // �ּҷ� ���� ȭ��
		printf("					l 1. ���                  l\n");
		printf("					l 2. �˻�                  l\n");
		printf("					l 3. ����                  l\n");
		printf("					l 4. ��ü ����Ʈ ����      l\n");
		printf("					l 5. ����                  l\n");
		printf("					l�ѤѤѤѤѤѤѤѤѤѤѤѤ�l\n");
		printf("\n");
		printf("���� �׸� �� ���ڸ� �ϳ� �����Ͻÿ� : ");
		scanf("%d", &select);
		printf("\n");

		switch (select)  // ��ȣ�� selecrt�� �Է� �޾Ƽ� �� �Լ��� �̵�
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
			printf("�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �ϼ���\n");
		}
	}
}

void input()   //��� �Լ�
{
	printf("\n");
	printf("������ �̸��� �Է��ϼ��� : ");
	scanf(" %s", &NameDate[index]);
	printf("������ ��ȭ��ȣ�� �Է��ϼ��� : ");
	scanf(" %s", &TelDate[index]);
	printf(" ����!!! ������ �Ϸ�Ǿ����ϴ�.");
	printf("\n");
	++index;   // �̸��� ��ȭ��ȣ �Է� ���� �� index ����
	//���⼭ index�� �ּҷϿ� ����� ����� ��
}

void search()   //�˻� �Լ�
{
	int i = 0;
	char sea[15];

	printf("\n");
	printf("ã�� ��ȭ ��ȣ�� �̸��� �Է� �ϼ���: ");
	scanf("%s", &sea);

	for (i = 0; i < index; i++)    
		// ����� �ڷḦ �߰��� �� ��ŭ �����ؼ� ã��
	{   
		if (!strcmp(sea, NameDate[i]))  
			// ã�� ����� �̸�[sea] �Է��� ���� NameDate���� ã�Ƽ� ���̸� ����
		{
			printf("\n");
			printf("             ����ó!!\n");
			printf("------------------------------------\n");
			printf("�̸� : %s\n", NameDate[i]);
			printf("��ȭ ��ȣ : %s\n", TelDate[i]);
			printf("------------------------------------\n");
		}
	}
}

void edit()   // ���� �Լ�
{
	int i = 0;
	char re[20];

	printf("\n");
	printf("���� �� ��ȭ��ȣ�� �̸��� �Է��ϼ��� : ");
	scanf(" %s", &re);

	for (int i = 0; i < index; i++)       
		// ����� �ڷḦ �߰��� �� ��ŭ �����ؼ� ã��
	{ 
		if (!strcmp(re, NameDate[i]))  
			// ������ �̸�[re] �Է��� ���� NameDate���� ã�� �� ���ڿ��� ���� �� ����
		{
			printf("\n");
			printf("------------------------------------\n");
			printf("�̸� : %s\n", NameDate[i]);
			printf("��ȭ��ȣ : %s\n", TelDate[i]);
			printf("------------------------------------\n");
			printf("�� ������ ����Ǿ� �ִ� �����Դϴ�.\n");
			printf("\n");
			printf("���� �� ��ȭ��ȣ : ");
			scanf(" %s", &TelDate[i]);
			printf("  ������ �Ϸ� �Ǿ����ϴ�.!!");
		}
	}
}

void list() //��ü ����Ʈ ���� �Լ�
{
	printf("\n");
	printf("			    ����ó!!!\n");
	printf("		-------------------------------\n");

	for (int i = 0; i < index; i++) 
	{
		printf("		�̸� : %s\n", NameDate[i]);
		printf("		��ȭ��ȣ : %s\n", TelDate[i]);
		printf("		-------------------------------\n");
	}
}
