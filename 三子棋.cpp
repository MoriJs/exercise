#include"game.h"
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	menu();
	printf("��ѡ��");
	do
	{
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺");
			break;
		}
	} while (input);
	return 0;
}