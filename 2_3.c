#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//unsigned int reverse_bit(int value)
//{
//	int a = 0, b = 0, i = 0;
//	while (value)
//	{
//		a = value & 1;
//		b = a | b;
//		b <<= 1;
//		i++;
//		value >>= 1;
//	}
//	return b <<= (31 - i);
//}
//int main()
//{
//	int value;
//	scanf("%d", &value);
//	unsigned int ret = reverse_bit(value);
//	printf("%u", ret);
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d", c >> 1);
//	return 0;
//}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i,ret=0;
//	for (i = 0; i < sz; i++)
//		ret ^= arr[i];
//	//  ^ ������λ��ͬΪ0������Ϊ1
//	// 1001
//	// 1010
//	// 0011
//	//��0������ͬ�������Ϊ0
//	printf("%d", ret);
//	return 0;
//}

//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

//student a am i
//i ma a tneduts
//i am a student
//void reverse(char* left,char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_str(char arr[], int sz)
//{
//	char* left = arr;
//	char* right = arr + sz - 1;
//	char* start = arr;
//	char* end = arr;
//	reverse(left, right);
//	while (*end != '\0')
//	{
//		while ((*end != ' ') && (*end != '\0'))
//			end++;
//		reverse(start, end - 1);
//		if (*end != '\0')
//		{
//			start = end + 1;
//			end += 1;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	reverse_str(arr,sz);
//	printf("%s", arr);
//	return 0;
//}

//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
int main()
{
	int money, total;
	scanf("%d", &money);
	if (money > 0)
		total = 2 * money - 1;
	else
		total = 0;
	printf("%d", total);
	return 0;
}