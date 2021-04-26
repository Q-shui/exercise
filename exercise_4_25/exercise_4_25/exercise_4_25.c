#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
//int main()
//{
//	int a, b, c, t;
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
//
//	}
//	if (a > c)
//	{
//		t = c;
//		c = a;
//		a = t;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 4 == 0)
//	{
//		printf("OK\n");
//	}
//	return 0;
//}
//int main()
//{
//	int score;
//	scanf("%d", &score);
//	if (score >= 60)
//	{
//		printf("pass\n");
//	}
//	else
//	{
//		printf("failure\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	char op;
//	scanf("%d", &a);
//	op = _getch();
//	printf("%c%d", op,a);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	char op;
//	printf("请输入两个数：>");
//	scanf("%d%d", &a, &b);
//	getchar();
//	printf("请选择要执行的四则运算符（+，-，*，/）：>");
//	op = getchar();
//	switch (op)
//	{
//	case '+':
//		printf("%d %c %d = %d", a, op, b, a + b);
//		break;
//	case '-':
//		printf("%d %c %d = %d", a, op, b, a - b);
//		break;
//	case '*':
//		printf("%d %c %d = %d", a, op, b, a * b);
//		break;
//	case '/':
//		printf("%d %c %d = %lf", a, op, b, (double)a / b);
//		break;
//
//	}
//	return 0;
//}
//int main()
//{
//	int e, grade;
//	printf("请输入成绩(0-100)：>");
//	scanf("%d", &grade);
//	/*printf("\n");*/
//	/*if (grade > 100 || grade < 0)
//	{
//		printf("Error grade!");
//	}*/
//	e = grade / 10;
//	switch (e)
//	{
//	case 0:
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("grade E\n");
//		break;
//	case 6:
//		printf("grade D\n");
//		break;
//	case 7:
//		printf("grade C\n");
//		break;
//	case 8:
//		printf("grade B\n");
//		break;
//	case 9:
//		/*printf("grade A\n");
//		break;*/
//	case 10:
//		printf("grade A\n");
//		break;
//	default:
//		printf("Error grade!");
//		break;
//	}
//	
//
//	return 0;
//}