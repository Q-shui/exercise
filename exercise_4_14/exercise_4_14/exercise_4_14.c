#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////��ϴ�ֵ
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
//	printf("�ϴ�ֵ��%d\n", max);
//	return 0;
//}
////�ж�һ�����Ƿ����100
//void Judge(int x)
//{
//	if (x > 100)
//	{
//		printf("���������100\n");
//	}
//	else
//	{
//		printf("�����������100\n");
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	Judge(a);
//	return 0;
//}
////�ɴ�С���������
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
////�������Ӣ����ĸ��Сд����
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
//	printf("������һ����ĸ:\n");
//	char letter = getchar();
//	if((letter<91 && letter>64) || (letter>96 && letter<123))
//	{
//		putchar(tranform(letter));
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	
//	return 0;
//}
////�ж�һ���ַ��ǲ���Ӣ����ĸ
//void Judge(char x)
//{
//	if ((x < 91 && x>64) || (x > 96 && x < 123))//if(x > = 'a' && x > = 'z || x > = 'A' || x < = 'Z')
//	{
//		printf("����ַ���Ӣ����ĸ\n");
//	}
//	else
//	{
//		printf("���������Ӣ����ĸ\n");
//	}
//}
//int main()
//{
//	char letter = getchar();
//	Judge(letter);
//	return 0;
//}
////����һ������������Ƿ�0�������OK�������ʲôҲ����ʾ
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
//�ж�һ�����Ƿ���0-100֮��
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
//�����������е������
int main()
{
	int x = 3, y = 2, z = 1;
	x = y++ >= x && x - y == ++z;
	printf("%d%d%d", x,y,z);

	return 0;
}