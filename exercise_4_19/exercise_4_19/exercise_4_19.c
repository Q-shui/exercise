#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int Fac1(int a)
{
	if (a >= 2)
	{
		return Fac1(a - 1) * a;
	}
	else
	{
		return a;
	}
}
int Fac2(int y)
{
	int i = 0;
	int acc = 1;
	for (i = 1; i <= y; i++)
	{
		acc *= i;
	}
	return acc;
}
int main()
{
	int n;
	printf("请输入一个数：>");
	scanf("%d", &n);
	int x = Fac1(n);
	int y = Fac2(n);
	printf("递归：%d\n非递归：%d", x, y);
	return 0;
}
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x%10);
//}
//int main()
//{
//	int a =1234;
//	print(a);
//	return 0;
//}
//void Mul_table(int x)
//{
//	int i, j;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-2d  ", i, j, i * j);
//			
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a;
//	printf("请输入乘法口诀表的阶数：>");
//	scanf("%d", &a);
//	printf("\n");
//	Mul_table(a);
//	return 0;
//}
//void Swap(int* x, int* y)
//{
//	int m;
//	int* z = &m;
//	*z = *x;
//	*x = *y;
//	*y = *z;
//}
//int main()
//{
//	int a, b;
//	int* x = &a;
//	int* y = &b;
//	scanf("%d%d", &a, &b);
//	Swap(x, y);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//void Leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		printf("这一年是闰年\n");
//	}
//	else
//	{
//		printf("这一年不是闰年\n");
//	}
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	Leap_year(year);
//	return 0;
//}
//void Search_prime_number(int x)
//{
//	int t = 0;
//	for (t = 2; t <= sqrt(x); t++)
//	{
//		if (x % t == 0)
//		{
//			break;
//		}
//	}
//	if (t > sqrt(x))
//	{
//		printf("%d ", x);
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		Search_prime_number(i);
//	}
//	return 0;
//}