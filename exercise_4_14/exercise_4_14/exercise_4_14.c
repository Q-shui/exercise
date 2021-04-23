#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////求较大值
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("较大值是%d\n", max);
//	return 0;
//}
////判断一个数是否大于100
//void Judge(int x)
//{
//	if (x > 100)
//	{
//		printf("这个数大于100\n");
//	}
//	else
//	{
//		printf("这个数不大于100\n");
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	Judge(a);
//	return 0;
//}
////由大到小输出两个数
//void D_rank(int x, int y)
//{
//	int t;
//	if (x < y)
//	{
//		t = y;
//		y = x;
//		x = t;
//	}
//	printf("%d %d", x,y);
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	D_rank(a, b);
//	return 0;
//}
////将输入的英文字母大小写互换
//int tranform(char x)
//{
//	int y;
//	if (x < 91)
//	{
//		y = x + 32;
//	}
//	else
//	{
//		y = x - 32;
//	}
//	return y;
//}
//int main()
//{
//	printf("请输入一个字母:\n");
//	char letter = getchar();
//	if((letter<91 && letter>64) || (letter>96 && letter<123))
//	{
//		putchar(tranform(letter));
//	}
//	else
//	{
//		printf("输入错误\n");
//	}
//	
//	return 0;
//}
////判断一个字符是不是英文字母
//void Judge(char x)
//{
//	if ((x < 91 && x>64) || (x > 96 && x < 123))//if(x > = 'a' && x > = 'z || x > = 'A' || x < = 'Z')
//	{
//		printf("这个字符是英文字母\n");
//	}
//	else
//	{
//		printf("这个数不是英文字母\n");
//	}
//}
//int main()
//{
//	char letter = getchar();
//	Judge(letter);
//	return 0;
//}
////输入一个整数，如果是非0数，输出OK，否则就什么也不显示
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a)
//	{
//		printf("OK");
//	}
//	return 0;
//}
//判断一个数是否在0-100之间
//int main()
//{
//	int score;
//	scanf("%d", &score);
//	if (score < 0 || score>100)
//	{
//		printf("Error score!\n");
//	}
//	return 0;
//}
//求三个整数中的最大数
int main()
{
	int x = 3, y = 2, z = 1;
	x = y++ >= x && x - y == ++z;
	printf("%d%d%d", x,y,z);

	return 0;
}