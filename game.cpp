#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("****  1.play    0.exit****\n");
	printf("**************************\n");
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}
}
void ShowBoard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		printf("---|---|---\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("����� X\n");
	printf("���������꣺");
	//��֤���������
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("�����걻ռ��\n���������룺");
		}
		else
			printf("����Ƿ�\n���������룺");
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������ O\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}
int IsFault(char board[ROW][COL], int row, int col)
{
	//����1��ʾ��������
	//����0��ʾ����û��
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	//���Ӯ 'X'
	//����Ӯ 'O'
	//ƽ��   'Q'
	//����   'C'
	int i;
	//�ж��Ƿ�Ӯ
	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
			return board[i][0];
	}
	//����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[0][i];
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		return board[0][2];
	//�ж��Ƿ�ƽ��
	if (1 == IsFault(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}
void game()
{
	char board[ROW][COL] = { 0 };
	char ret;
	//��ʼ������
	InitBoard(board, ROW, COL);
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		//��ӡ����
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL); //�ж���Ӯ
		if (ret != 'C')
			break;
		system("cls");
		ComputerMove(board, ROW, COL);  //������
		ShowBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'X')
		printf("���Ӯ\n");
	else if (ret == 'O')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
	printf("********************************\n");
	printf("****1.����һ��    0.�˳���Ϸ****\n");
	printf("********************************\n");
}