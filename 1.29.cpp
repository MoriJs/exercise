#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
////����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//int main()
//{
//	int line;
//	scanf("%d", &line);
//	int i, j;
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%2d*%-2d=%-2d ", j, i, j * i);
//		printf("\n");
//	}
//	return 0;
//}

////2.ʹ�ú���ʵ���������Ľ�����
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

////3.ʵ��һ�������ж�year�ǲ������ꡣ
//int leap_year(int year)
//{
//	//�����귵��1���������귵��0
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	int ret=leap_year(year);
//	if (ret == 1)
//		printf("%d��������", year);
//	else
//		printf("%d�겻������", year);
//	return 0;
//}

////4.����һ�����飬
////ʵ�ֺ���init������ʼ�����顢
////ʵ��empty����������顢
////ʵ��reverse���������������Ԫ�ص����á�
////Ҫ���Լ���ƺ����Ĳ���������ֵ��
//void init(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		scanf("%d", &arr[i]);
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0, right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void empty(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//void print(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������%d�����֣�\n",sz);
//	init(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	empty(arr,sz);
//	print(arr, sz);
//	return 0;
//}

////5.ʵ��һ���������ж�һ�����ǲ���������
//#include<math.h>
//int  prime_number(int x)
//{
//	//����������1�����Ƿ���0
//	int i,flag=1;
//	for (i = 2; i <= (int)sqrt(x); i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	return flag;
//}
//int main()
//{
//	int num;
//	printf("������һ�����֣�");
//	scanf("%d", &num);
//	int ret=prime_number(num);
//	if (ret == 1)
//		printf("%d������", num);
//	else
//		printf("%d��������", num);
//	return 0;
//}

