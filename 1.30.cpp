#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	//�ݹ鷨
//	int n;
//	scanf("%d", &n);
//	int ret=Fibonacci(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	//ѭ����
//	int n, f[3] = { 1,1 };
//	scanf("%d", &n);
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		f[2] = f[0] + f[1];
//		f[0] = f[1];
//		f[1] = f[2];
//	}
//	printf("%d", f[2]);
//	return 0;
//}

////2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//int my_pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	return n * my_pow(n,k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	int ret=my_pow(n, k);
//	printf("%d", ret);
//	return 0;
//}

////3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n / 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}

////4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int my_strlen(char* string)
//{
//	if (*string == '\0')
//		return 0;
//	return 1 + my_strlen(string+1);
//}
//
//void reverse_string(char* string)
//{
//	int len=my_strlen(string);
//	char* right = (string + len - 1);
//	char tmp = *string;
//	*string = *right;
//	*right = '\0';
//	if (my_strlen(string + 1) >= 2)
//		reverse_string(string + 1);
//	*right = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);	
//	return 0;
//}

////5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	return 1 + my_strlen(arr + 1);
//}
//int main()
//{
//	//�ݹ鷨
//	char arr[] = "abcdef";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//�ǵݹ�
//int my_strlen(char* arr)
//{
//	//������
//	int count = 0;
//	while (*(arr++) != '\0')
//		count++;
//	return count;
//}

//int my_strlen(char* arr)
//{
//	//�±귨
//	int len=0;
//	while (arr[len] != '\0')
//		len++;
//	return len;
//}

//int my_strlen(char* arr)
//{
//	//�ݹ鷨
//	if (*arr == '\0')
//		return 0;
//	return 1 + my_strlen(arr + 1);
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

////6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//int  factorial(int n)
//{
//	//�ݹ鷨
//	if (n == 1)
//		return 1;
//	return n * factorial(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	//ѭ����
//	int n, i, ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		ret *= i;
//	printf("%d", ret);
//	return 0;
//}

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int n)
//{
//	if(n>10)
//		print(n / 10);
//	printf("%d ", n%10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//�ǵݹ� 
//#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0, tmp = n;
//	while (tmp)
//	{
//		tmp /= 10;
//		count++;
//	}
//	int i = 0;
//	for (i = count-1; i >= 0; i--)
//	{
//		int t = n / (int)pow(10, i);
//		t %= 10;
//		printf("%d ", t);
//	}
//	return 0;
//}