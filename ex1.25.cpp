#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʵ��23  ��ӡ����
//int main()
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j <3-i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (j = 0; j < 5 - 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//ʵ��24 ��2/1+3/2+5/3+...ǰ20��ĺ�
//int main()
//{
//	int i;
//	float a, b, sum;
//	a = 2, b = 1, sum = 0;
//	for (i = 0; i < 20; i++)
//	{
//		sum = sum + a / b;
//		a = a + b;
//		b = a-b;
//	}
//	printf("%f", sum);
//	return 0;
//}

//ʵ��25  ��1!+2!+...+n!
//int main()
//{
//	int i;
//	long double n = 1, sum = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		n *= i;
//		sum += n;
//	}
//	printf("%.0lf", sum);
//	return 0;
//}

//ʵ��26  �ݹ���n!
//int fac(int n)
//{
//	if (n == 1)
//		return 1;
//	return n * fac(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret=fac(n);
//	printf("%d", ret);
//	return 0;
//}

//ʵ��27  �����ӡ�ַ���
#include<string.h>
//char opp(char ch[],int n)
//{
//	if (n >= 1)
//	{
//		printf("%c", ch[n - 1]);
//		opp(ch, n - 1);
//	}
//	return '\0';
//}
//int main()
//{
//	int n = 5;
//	char ch[6];
//	scanf("%s", ch);
//	opp(ch,n);
//	return 0;
//}

//ʵ��28 ��������
//int age(int n)
//{
//	if (n ==1)
//		return 10;
//	return 2+age(n - 1);
//}
//int main()
//{
//	int n = 5;
//	int ret=age(n);
//	printf("%d", ret);
//	return 0;
//}

//ʵ��29 �����ӡ����
//int main()
//{
//	int num,n,count=0;
//	scanf("%d", &num);
//	while (num)
//	{
//		n = num % 10;
//		num = num / 10;
//		count++;
//		printf("%d", n);
//	}
//	printf("\n%d", count);
//	return 0;
//}

//ʵ��30  5λ���Ļ�����
//int main()
//{
//	int i,j,n,arr[5];
//	for (i = 10000; i <= 99999; i++)
//	{
//		n = i, j = 0;
//		while (n)
//		{
//			arr[j] = n % 10;
//			n = n / 10;
//			j++;
//		}
//		if (arr[0] == arr[4] && arr[1] == arr[3])
//			printf("%d ", i);
//	}
//	return 0;
//}

//ʵ��31 ����ĸ�ж����ڼ�
int main()
{
	char i,j;
	int n=1;
	printf("�����һ����ĸ:");
	do
	{
		scanf("%c", &i);
		getchar();
		switch (i)
		{
		case 'M': case 'm':
			printf("monday");
			break;
		case 'W': case 'w':
			printf("wednesday");
			break;
		case 'F': case 'f':
			printf("friday");
			break;
		case 'T': case 't':
			printf("����ڶ�����ĸ:");
			scanf("%c", &j);
			if (j == 'u')
			{
				printf("tuesday");
				break;
			}
			if (j == 'h')
			{
				printf("thursday");
				break;
			}
		case 'S': case 's':
			printf("����ڶ�����ĸ:");
			scanf("%c", &j);
			if (j == 'a')
			{
				printf("saturday");
				break;
			}
			if (j == 'u')
			{
				printf("sunday");
				break;
			}
		default:
			printf("�������,����������:");
			n = 0;
			break;
		}
	} while (n == 0);
	return 0;
}