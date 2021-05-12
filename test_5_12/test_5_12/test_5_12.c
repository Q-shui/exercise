#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int n, m,a,b,c,d;
//	for (n = 1; n <= 256; n++)
//	{
//		m = n * n;
//		if (m < 10)
//		{
//			printf("%d ", n);
//		}
//		if (m < 100 && m>10)
//		{
//			a = m % 10;
//			b = m / 10;
//			if (a == b)
//			{
//				printf("%d ", n);
//			}
//		}
//		if (m >= 100 && m <= 1000)
//		{
//			a = m % 10;
//			b = m / 100;
//			if (a == b)
//			{
//				printf("%d ", n);
//			}
//		}
//		if (m >= 1000 && m < 10000)
//		{
//			a = m % 10;
//			b = m / 1000;
//			c = (m % 100) / 10;
//			d = (m % 1000) / 100;
//			if (a == b && c == d)
//			{
//				printf("%d ", n);
//			}
//		}
//		if (m >= 10000)
//		{
//			a = m % 10;
//			b = m / 10000;
//			c = (m % 100) / 10;
//			d = (m % 10000) / 1000;
//			if (a == b && c == d)
//			{
//				printf("%d ", n);
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	for (n = 1000; n >= 100; n--)
//	{
//		if (n % 13 == 0)
//		{
//			printf("%d\n", n);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, n, i,s;
//	printf("ÇëÊäÈëa(0-10)£¬nµÄÖµ£º>");
//	scanf("%d%d", &a, &n);
//	int sum = a;
//	for (i = 1,s = a; i < n; i++)
//	{
//		s = a + s * 10;
//		sum += s;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 7 || i / 10 == 7)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
