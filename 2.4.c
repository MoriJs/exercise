#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//void reverse(char* start, char* end)
//{
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//void reverse_str(char* arr)
//{
//	assert(arr);
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	int k;
//	scanf("%d", &k);
//	char* start = arr;
//	char* end = arr + k - 1;
//	reverse(start, end);
//	reverse(end + 1, right);
//	reverse(left, right);
//}
//int main()
//{
//	char arr[] = "ABCD";
//	reverse_str(arr);
//	printf("%s", arr);
//	return 0;
//}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
int is_right_move(char* s1, char* s2)
{
	assert(s1 && s2);//�ж�ָ���Ƿ�Ϊ��
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
		return 0;
	strncat(s1, s1, len1);//��s1�ַ�����׷��s1�ַ���
	char* ret=strstr(s1, s2);//�ж�s2�Ƿ�Ϊs1���Ӵ�
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char s1[20] = "AABCD";
	char s2[] = "BCDAA";
	int ret = is_right_move(s1, s2);
	if (ret == 1)
		printf("s2��s1�ַ�����ת֮����ַ���\n");
	else
		printf("s2����s1�ַ�����ת֮����ַ���\n");
	return 0;
}