#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, c, t;
//	printf("��������������:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	printf("��С�����˳����%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int x;
//	printf("������һ��������>");
//	scanf("%d", &x);
//	if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0)
//	{
//		printf("��ͬʱ��3��5��7����\n");
//	}
//	else if (x % 3 == 0 && x % 5 == 0 || x % 5 == 0 && x % 7 == 0 || x % 3 == 0 && x % 7 == 0)
//	{
//		if (x % 3 != 0)
//		{
//			printf("�ܱ�5��7����\n");
//		}
//		if (x % 5 != 0)
//		{
//			printf("�ܱ�3��7����\n");
//		}
//		if (x % 7 != 0)
//		{
//			printf("�ܱ�3��5����\n");
//		}
//	}
//	else if(x % 3 == 0 || x % 5 == 0 || x % 7 == 0)
//	{
//		
//	}
//	return 0;
//}
//int main()
//{
//	int x;
//	printf("������һ��������>");
//	scanf("%d", &x);
//	if (x % 3 == 0)
//	{
//		if (x % 5 == 0)
//		{
//			if (x % 7 == 0)
//			{
//				printf("��ͬʱ��3��5��7����\n");
//			}
//			else
//			{
//				printf("�ܱ�3��5����\n");
//			}
//		}
//		else
//		{
//			if (x % 7 == 0)
//			{
//				printf("�ܱ�3��7����\n");
//			}
//			else
//			{
//				printf("�ܱ�3����\n");
//			}
//		}
//	}
//	else
//	{
//		if (x % 5 == 0)
//		{
//			if (x % 7 == 0)
//			{
//				printf("�ܱ�5��7����\n");
//			}
//			else
//			{
//				printf("�ܱ�5����\n");
//			}
//		}
//		else
//		{
//			if (x % 7 == 0)
//			{
//				printf("�ܱ�7����\n");
//			}
//			else
//			{
//				printf("���ܱ�3��5��7��һ������\n");
//			}
//		}
//	}
//	return 0;
//}
//void print(int a[],int y)
//{
//	for (int i = 0; i < y; y++)
//	{
//		printf("%d,", a[i]);
//	}
//	
//}
//int Delete(int a[],int* y)
//{
//	int i, b[] = { 0 };
//	for (i = 0; i < *y; i++)
//	{
//		if (a[i] == 0)
//		{
//			for (int j = 0; j < *y-1; j++)
//			{
//				if (j < i)
//				{
//					b[j] = a[j];
//				}
//				else if (j > i)
//				{
//					b[j] = a[j + 1];
//				}
//			}
//		}
//		*y -= 1;
//	}
//	return b[*y];
//}
void Judge(int a[],int b[],int t)
{
	int i = 0,j = 0;
	for (i = 0; i < t; i++)
	{
		if (a[i] == 1)
		{
			a[i] = b[i];
		}
	}
	for (i = 0; i < t; i++)
	{
		if (a[i] != 0)
		{
			a[j] = a[i];
			j++;
		}
	}
	if (a[0] == 0)
	{
		printf("��������ܱ���������һ��������\n");
	}
	else
	{
		printf("�ܱ�����������\n");
		for (i = 0; i < j; i++)
		{
			printf("%d ",a[i]);
		}
	}

	//int* p = &t;
	//Delete(a, p);
	//if (a[0] == 0)
	//{
	//	printf("���ܱ�����һ��������\n");
	//}
	//else
	//{
	//	printf("�ܱ�����������\n");
	//	print(Delete(a,p), t - 1);
	//}
}
int main()
{
	int x, y, i;
	printf("������һ������:>");
	scanf("%d", &x);
	printf("��������Ҫ��ⱻ������������");
	scanf("%d", &y);
	int arr1[] = { 0 }, arr2[] = { 0 };
	printf("��������Ҫ��ⱻ��������>");
	for (i = 0; i < y; i++)
	{
		scanf("%d", &arr2[i]);
	}
	/*for (i = 0; i < y; i++)
	{
		printf("%d ", arr2[i]);
	}*/
	for (i = 0; i < y; i++)
	{
		if (x % (arr2[i]) == 0)
		{
			arr1[i] = 1;
		}
	}
	/*for (i = 0; i < y; i++)
	{
		printf("%d ", arr1[i]);
	}*/
	/*if (x % 3 == 0)
	{
		arr1[0] = 1;
	}
	if (x % 5 == 0);
	{
		arr1[1] = 1;
	}
	if (x % 7 == 0)
	{
		arr1[2] = 1;
	}*/
	Judge(arr1,arr2,y);
}