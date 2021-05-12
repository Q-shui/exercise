#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	return 0;
}

//int main()
//{
//	int i;
//	for (i = 1;; i++)
//	{
//		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1;; i++)
//	{
//		if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i, j, k;
//	for (i = -5; i <= 11; i++)
//	{
//		for (j = -10; j <= 9; j++)
//		{
//			for (k = -6; k <= 18; k++)
//			{
//				if ((i * i * i) + (j * j * j) + (k * k * k) == 3)
//				{
//					printf("%d,%d,%d\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y, z;
//	for (x = 0; x <= 20; x++)
//	{
//		for (y = 0; y <= 100; y++)
//		{
//			for (z = 0; z <= 100; z++)
//			{
//				if ((x + y + z == 100) && (x * 15) + (y * 9) + z == 300)
//				{
//					printf("鸡翁有%d只，鸡母有%d只，鸡雏有%d只.\n", x, y, z);
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int s, n, t;
//	for (s = 0, n = 1, t = 1; n <= 2;n++)
//	{
//		t *= n;
//		s += t;
//	}
//	printf("%d\n", s);
//	return 0;
//}//比较好

//int main()
//{
//	int i, j, sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		int m = 1;
//		for (j = 1; j <= i; j++)
//		{
//			
//			m *= j;
//		}
//		sum += m;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 1, c,i;
//	printf("1 1 ");
//	for (i = 3; i <= 20; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		printf("%d ", c);
//	}
//	return 0;
//}

//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int change = 1,n;
//	double i, sum = 0.0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += (1.0 / i) * change;
//		change = -change;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	double i = 1.0, sum= 0.0;
//	int change = 1;
//	do
//	{
//		sum += (1.0 / i) * change;
//		change = -change;
//		i += 2;
//	} while ((1.0 / i) > 0.000001);
//	printf("%lf\n", sum*4);
//	return 0;
//}

//int main()
//{
//	double x, sum = 0.0;
//	do
//	{
//		scanf("%lf", &x);
//		if (x > 0.0)
//		{
//			sum += x;
//		}
//		
//	} while (x > 0.0);
//	printf("%lf", sum);
//	return 0;
//}//条件判断赘余

//int main()
//{
//	double x, sum = 0.0;
//	do
//	{
//		scanf("%lf", &x);
//		sum += x;
//	} while (x > 0.0);
//	printf("%lf", sum);
//	return 0;
//}//有问题

//int main()
//{
//	int arr[10];
//	int max;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	double x, sum = 0.0;
//	scanf("%lf", &x);
//	while (x > 0.0)
//	{
//		sum += x;
//		scanf("%lf", &x);
//	}
//	printf("%lf\n", sum);
//}

//int main()
//{
//	int i, sum = 0;
//	for (i = 300; i <= 800; i++)
//	{
//		if (i % 7 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += (i * i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}