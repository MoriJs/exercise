#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("********************************\n");
	printf("       1.play       0.exit      \n");
	printf("********************************\n");
}
int judge(int player, int computer)
{
	if (player > computer)
		return 1;
	else if (player < computer)
		return -1;
	else
		return 0;
}
void playgame()
{
	srand((unsigned)time(NULL));
	int computer = rand() % 100;
	printf("���������֣�");
	int player, flag;
	do
	{
		scanf("%d", &player);
		flag = judge(player, computer);
		if (flag == 1)
			printf("�´���\n");
		else if (flag == -1)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			Sleep(1000);
			system("cls");
		}
	} while (flag);
}
int main()
{
	int input;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			playgame();
			break;
		case 0:
			break;
		default:
			printf("������ѡ��");
			break;
		}
	} while (input);
	return 0;
}