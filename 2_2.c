#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//void move(int arr[], int sz)
//{
//	int left = 0, right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && arr[left] % 2 == 1)
//			left++;
//		while ((left < right) && arr[right] % 2 == 0)
//			right--;
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//2.
////���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
int search(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k;
	scanf("%d", &k);
	int x = 3, y = 3;
	int ret=search(arr, k, &x, &y);
	if (ret == 1)
		printf("�ҵ���,�±��ǣ�%d %d\n", x, y);
	else
		printf("�Ҳ���\n");
	return 0;
}