#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, c, t;
//	printf("请输入三个整数:>");
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
//	printf("从小到大的顺序是%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int x;
//	printf("请输入一个整数：>");
//	scanf("%d", &x);
//	if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0)
//	{
//		printf("能同时被3，5，7整除\n");
//	}
//	else if (x % 3 == 0 && x % 5 == 0 || x % 5 == 0 && x % 7 == 0 || x % 3 == 0 && x % 7 == 0)
//	{
//		if (x % 3 != 0)
//		{
//			printf("能被5，7整除\n");
//		}
//		if (x % 5 != 0)
//		{
//			printf("能被3，7整除\n");
//		}
//		if (x % 7 != 0)
//		{
//			printf("能被3，5整除\n");
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
//	printf("请输入一个整数：>");
//	scanf("%d", &x);
//	if (x % 3 == 0)
//	{
//		if (x % 5 == 0)
//		{
//			if (x % 7 == 0)
//			{
//				printf("能同时被3，5，7整除\n");
//			}
//			else
//			{
//				printf("能被3，5整除\n");
//			}
//		}
//		else
//		{
//			if (x % 7 == 0)
//			{
//				printf("能被3，7整除\n");
//			}
//			else
//			{
//				printf("能被3整除\n");
//			}
//		}
//	}
//	else
//	{
//		if (x % 5 == 0)
//		{
//			if (x % 7 == 0)
//			{
//				printf("能被5，7整除\n");
//			}
//			else
//			{
//				printf("能被5整除\n");
//			}
//		}
//		else
//		{
//			if (x % 7 == 0)
//			{
//				printf("能被7整除\n");
//			}
//			else
//			{
//				printf("不能被3，5，7任一个整除\n");
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
		printf("这个数不能被上述任意一个数整除\n");
	}
	else
	{
		printf("能被以下数整除\n");
		for (i = 0; i < j; i++)
		{
			printf("%d ",a[i]);
		}
	}

	//int* p = &t;
	//Delete(a, p);
	//if (a[0] == 0)
	//{
	//	printf("不能被任意一个数整除\n");
	//}
	//else
	//{
	//	printf("能被以下数整除\n");
	//	print(Delete(a,p), t - 1);
	//}
}
int main()
{
	int x, y, i;
	printf("请输入一个整数:>");
	scanf("%d", &x);
	printf("请输入所要求解被整除数个数：");
	scanf("%d", &y);
	int arr1[] = { 0 }, arr2[] = { 0 };
	printf("请输入所要求解被整除数：>");
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