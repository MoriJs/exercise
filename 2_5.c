#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
//int main()
//{
//	int arr[] = { 1,2,3,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0, i;
//	for (i = 0; i < sz; i++)
//		ret ^= arr[i];
//	printf("%d", ret);
//	return 0;
//}

//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//int main()
//{
//	int money, total;
//	scanf("%d", &money);
//	if (money > 0)
//		total = 2 * money - 1;
//	else
//		total = 0;
//	printf("%d", total);
//	return 0;
//}

//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int empty = money;
//	int total = empty;
//	while (empty >1)
//	{
//		total += empty / 2;
//		if (empty % 2 != 0)
//			empty += 1;
//		empty /= 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//3.ģ��ʵ��strcpy
#include<assert.h>
//char* my_strcpy(char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	char* cp = s1;
//	while (*s2 != '\0')
//	{
//		*cp++ = *s2++;
//	}
//	return s1;
//}
//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "ABCD";
//	my_strcpy(str1, str2);
//	printf("%s", str1);
//	return 0;
//}

//4.ģ��ʵ��strcat
#include<string.h>
char* my_strcat(char* str1, const char* str2)
{
	assert(str1 && str2);
	char* cp = str1;
	int len = strlen(str2);
	while (*cp != '\0')
		cp++;
	while (len--)
		*cp++ = *str2++;
	return str1;
}
int main()
{
	char s1[20] = "abcd";
	char s2[] = "efgi";
	my_strcat(s1, s2);
	printf("%s", s1);
	return 0;
}