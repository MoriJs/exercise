#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.дһ���������ز����������� 1 �ĸ���
//int count_one_bits(unsigned n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n & 1)
//			count++;
//		n >>= 1;
//	}
//	return count;
//}
//�Ż���
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = count_one_bits((unsigned)n);
//	//int ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}

////2.��ȡһ�������������������е�ż��λ������λ��
////�ֱ�������������С�
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	printf("���������е�ż��λ��");
//	for (i = 31; i >= 0; i-=2)
//		printf("%d ",(n >> i) & 1);
//	printf("\n");
//	printf("���������е�����λ��");
//	for (i = 30; i >= 0; i-=2)
//		printf("%d ", (n >> i) & 1);
//	return 0;
//}

////3. ���һ��������ÿһλ��
//void print(int n)
//{
//	//�ݹ鷨
//	if (n > 10)
//		print(n / 10);
//	printf("%d ",n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

////�ǵݹ�
//#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0, tmp = n;
//	while (tmp)
//	{
//		count++;
//		tmp /= 10;
//	}
//	int i;
//	for (i = count - 1; i >= 0; i--)
//	{
//		int t = n / (int)pow(10, i);
//		printf("%d ", t % 10);
//	}
//	return 0;
//}

////4.���ʵ�֣�
////����int��32λ������m��n�Ķ����Ʊ���У�
////�ж��ٸ�λ(bit)��ͬ
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int a = m ^ n;
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a &= (a - 1);
//	}	
//	printf("%d", count);
//	return 0;
//}