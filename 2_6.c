#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.ʵ��strcpy
#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//		;
//	//����Ŀ�Ŀռ�ĵ�ַ
//	return ret;
//}
//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "ABCD";
//	my_strcpy(str1, str2);
//	printf("%s", str1);
//	return 0;
//}

//2.ʵ��strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//�ҵ�Ŀ���ַ�����'\0'
//	while (*dest)
//		dest++;
//	//׷��
//	while (*dest++ = *src++) ;
//	return ret;
//}
//int main()
//{
//	char str1[20] = "abcd";
//	char str2[] = "efg";
//	my_strcat(str1, str2);
//	printf("%s", str1);
//	return 0;
//}

//3.ʵ��strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* start = (char*)str1;
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*start)
//	{
//		s1 = start;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && (*s1 = *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return start;  //�ҵ��Ӵ�
//		start++;
//	}
//	return NULL;  //�Ҳ����Ӵ�
//}
//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "def";
//	char* ret=my_strstr(str1, str2);
//	if (ret)
//		printf("%s\n", ret);
//	else
//		printf("�ִ�������");
//	return 0;
//}

//4.ʵ��strchr
//int my_strchr(const char* str, int c)
//{
//	assert(str);
//	char* s1 = (char*)str;
//	while (*s1)
//	{
//		if (*s1 == c)
//			return s1 - str;  //�ҵ���
//		s1++;
//	}
//	return (int)NULL;  //�Ҳ���
//}
//int main()
//{
//	char str[] = "abcdefg";
//	char ch = 'c';
//	int ret = my_strchr(str, ch);
//	if (ret)
//		printf("�ַ�%c�ҵ��ˣ��±���%d", ch, ret);
//	else
//		printf("�Ҳ����ַ�%c", ch);
//	return 0;
//}

//5.ʵ��strcmp
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return *str1 - *str2;
		str1++;
		str2++;
	}
	return 0;
}
int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcqwe";
	int ret = my_strcmp(str1, str2);
	printf("%d", ret);
	return 0;
}
