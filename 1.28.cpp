#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//int half_search(int* arr, int sz)
//{
//	int key, left=0, right=sz-1;
//	scanf("%d", &key);
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == key)
//			return mid;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else if (arr[mid] > key)
//			right = mid - 1;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=half_search(arr, sz);
//	if (ret >= 0)
//		printf("�ҵ����±���%d", ret+1);
//	else
//		printf("�Ҳ���");
//	return 0;
//}

//ģ��������������ĳ���
//#include<string.h>
//int main()
//{
//	const char password[20]= "123456";
//	char ch[20] = "\0";
//	int i;
//	printf("���������룺");
//	for (i = 0; i < 3; i++)
//	{
//		gets_s(ch);
//		if (strcmp(ch, password) == 0)
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//			printf("����������������룺");
//	}
//	return 0;
//}

//int main()
//{
//	char ch[20];
//	scanf("%s", ch);
//	char* p = ch;
//	while (*p != '\0')
//	{
//		if (*p >= 'a' && *p <= 'z')
//		{
//			*p -= 32;
//			printf("%c", *p);
//		}
//		else if (*p >= 'A' && *p <= 'Z')
//		{
//			*p += 32;
//			printf("%c", *p);
//		}
//		p++;
//	}
//	return 0;
//}