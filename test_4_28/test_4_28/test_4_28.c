#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void Judge(int a[], int b[], int t)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < t; i++)
//	{
//		if (a[i] == 1)
//		{
//			a[i] = b[i];
//		}
//	}
//	for (i = 0; i < t; i++)
//	{
//		if (a[i] != 0)
//		{
//			a[j] = a[i];
//			j++;
//		}
//	}
//	if (a[0] == 0)
//	{
//		printf("这个数不能被上述任意一个数整除\n");
//	}
//	else
//	{
//		printf("能被以下数整除\n");
//		for (i = 0; i < j; i++)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//}
//int main()
//{
//	int x, y, i;
//	printf("请输入一个整数:>");
//	scanf("%d", &x);
//	printf("请输入所要求解被整除数个数：");
//	scanf("%d", &y);
//	int arr1[] = { 0 }, arr2[] = { 0 };
//	printf("请输入所要求解被整除数：>");
//	for (i = 0; i < y; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < y; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	for (i = 0; i < y; i++)
//	{
//		if (x % (arr2[i]) == 0)
//		{
//			arr1[i] = 1;
//		}
//		else
//		{
//			arr1[i] = 0;
//		}
//	}
//	for (i = 0; i < y; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	Judge(arr1, arr2, y);
//}
/*int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x < 0 && x > -10)
	{
		y = x + 30;
	}
	else if (x < 10 && x >= 0)
	{
		y = 3 * x;
	}
	else if (x >= 10)
	{
		y = x * x;
	}
	printf("%lf", y);
	return 0;
}*/
int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x >= 100)
	{
		y = (x - 100) * 0.01 + 0.6 + 0.6 + 1.0 + 0.75 + 1.0;
	}
	else if (x < 100 && x >= 60)
	{
		y = (x - 60) * 0.015 + 0.6 + 1.0 + 0.75 + 1.0;
	}
	else if (x < 60 && x >= 40)
	{
		y = (x - 40) * 0.03 + 1.0 + 0.75 + 1.0;
	}
	else if (x < 40 && x >= 20)
	{
		y = (x - 20) * 0.05 + 0.75 + 1.0;
	}
	else if (x < 20 && x >= 10)
	{
		y = (x - 10) * 0.075 + 1.0;
	}
	else if (x < 10)
	{
		y = x * 0.1;
	}
	pr
}
/*int main()
{
	double x, y,z;
	char op;
	scanf("%lf %c %lf", &x, &op, &y);
	switch (op)
	{
	case '+':
		z = x + y;
		break;
	case '-':
		z = x - y;
		break;
	case '*':
		z = x * y;
		break;
	case '/':
		z = x / y;
		break;
	default:
		printf("错误的四则运算\n");
		break;
	}
	printf("%lf", z);
}*/