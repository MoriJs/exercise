#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʵ��32 ɾ���ַ����е�ָ���ַ�
//int main()
//{
//	char ch,a[20];
//	int i = 0;
//	printf("������һ���ַ���->");
//	scanf("%s", a);
//	getchar();
//	printf("������Ҫɾ�����ַ�->");
//	scanf("%c", &ch);
//	while (a[i] != '\0')
//	{
//		if (a[i] == ch)
//			a[i] = '0';
//		i++;
//	}
//	i = 0;
//	while (a[i] != '\0')
//	{
//		if(a[i]!='0')
//			printf("%c", a[i]);
//		i++;
//	}
//	return 0;
//}

//ʵ��33  �ж�һ�����Ƿ�Ϊ����
#include<math.h>
//int main()
//{
//	int n, i,flag=1;
//	scanf("%d", &n);
//	for (i = 2; i <= (int)sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//		printf("%d������", n);
//	else
//		printf("%d��������", n);
//	return 0;
//}

//ʵ��34 ��������
//void print(int n)
//{
//	if (n > 0)
//	{
//		printf("hello world!\n");
//		print(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	printf("�������ӡ����:");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//ʵ��35 �����ӡ�ַ���
#include<string.h>
//void reverse(char a[], int len)
//{
//	int left = 0, right = len - 1;
//	while (right > left)
//	{
//		char t = a[left];
//		a[left] = a[right];
//		a[right] = t;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char a[20] = "\0";
//	printf("������һ���ַ���:");
//	scanf("%s", a);
//	int len = strlen(a);
//	reverse(a, len);
//	printf("%s", a);
//	return 0;
//}

//ʵ��36 ��100���ڵ�����
//int main()
//{
// 	int i,j,flag;
//	for (i = 2; i <= 100; i++)
//	{
//		flag = 1;
//		for (j = 2; j <= (int)sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//			printf("%d ", i);
//	}
//	return 0;
//}

//ʵ��37 ��10��������
//#define n 5
//void rank(int a[n])
//{
//	int i,j, k;
//	for (i = 0; i < n; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[k] > a[j])
//				k = j;
//		}
//		int t = a[i];
//		a[i] = a[k];
//		a[k] = t;
//	}
//}
//int main()
//{
//	int i,a[n];
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	rank(a);
//	for (i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//ʵ��38  �����Խ���Ԫ��֮��
//#define n 3
//int main()
//{
//	int i, j, a[n][n] = { 0 }, sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			scanf("%d", &a[i][j]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		j = n - 1 - i;
//		if (i + j == n - 1)
//			sum += a[i][j];
//		sum += a[i][i];
//	}
//	if (n % 2)
//		sum -= a[(n - 1) / 2][(n - 1) / 2];
//	printf("%d", sum);
//	return 0;
//}