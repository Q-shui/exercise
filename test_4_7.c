#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
//float Fahrenheit(float x)
//{
//	float y;
//	y = 9.0 / 5.0*x  + 32.0;
//	return y;
//}
//int main()
//{
//	float a, b;
//
//	printf("������һ�������¶ȣ�\n");
//	scanf("%f", &a);
//	b = Fahrenheit(a);
//	printf("��Ӧ�Ļ����¶�Ϊ��%f", b);
//	return 0;
//}
//���͵�ת��
//int main()
//{
//	char a = 0;
//	int b= 0;
//	float c=0;
//	double d=0;
//	printf("%d", sizeof(a * b + d - c));
//	return 0;
//}
//��������һ���ַ���������ַ������Ӧ��ASII��ֵ
//int main()
//{
//	char a=getchar();
//	printf("%c\n", a);
//	printf("%d\n", a);
//	return 0;
//}
//�������ε����
//double area(double a, double b, double c)
//{
//	double S,s;
//	s = (a + b + c) / 2;
//	S = sqrt(s * (s - a) * (s - b) * (s - c));
//	return S;
//}
//int main()
//{
//	double a, b,c,S;
//	printf("�����������ε����߳���");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	S = area(a, b, c);
//	printf("\n�����ε������%lf\n", S);
//	return 0;
//}
//����һ��Сд�ַ�������ת���ɴ�д�ַ������
//int main()
//{
//	char c1, c2;
//	c1 = getchar();
//	c2 = c1 - 32;
//	putchar(c2);
//	return 0;
//}
//������ı���������
//#define pi 3.141593
//int main()
//{
//	double r,s,v;
//	printf("������һ������İ뾶��");
//	scanf("%lf", &r);
//	s = 4 * r * r * pi;
//	v = 4.0 / 3.0 * r * r * pi;
//	printf("\n����ı������%lf�������%lf\n", s, v);
//	return 0;
//}
//��������֮��ľ���
//int main()
//{
//	float x1, y1, x2, y2,d;
//	printf("����������������꣺");
//	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
//	d = sqrt((x1 - x2)*(x1-x2) + (y1 - y2)*(y1-y2));
//	printf("������֮��ľ����ǣ�%f", d);
//	return 0;
//}
//����һ����λ������������λ���ϵ���
//int main()
//{
//	int i, a, b, c;
//	printf("������һ����λ����");
//	scanf("%d", &i);
//	printf("\n");
//	a = i / 100;
//	b = i / 10 - a * 10;
//	c = i - a * 100 - b * 10;
//	if (a > 10)
//	{
//		printf("�������\n");
//	}
//	else if (a == 0)
//	{
//		printf("�������\n");
//	}
//	else
//	{
//		printf("����λ���İ�λ����%d��ʮλ����%d����λ����%d\n", a, b, c);
//	}
//	return 0;
//}
//�Ż����ú����ݹ�
//int digit(int x)
//{
//	if (x / 10 != 0)
//	{
//		digit(x / 10);
//	}
//	printf("%d ", x % 10);
//	return 0;
//}
//int main()
//{
//	int a;
//	printf("������һ����λ����");
//	scanf("%d", &a);
//	printf("�Ӵ�С��λ���ǣ�");
//	digit(a);
//}
//���������ַ������
//int main()
//{
//	char a,b,t;
//	printf("�����������ַ�a��b��");
//	scanf("%c,%c", &a, &b);//�ո�Ҳ���ַ�
//	t = a;
//	a = b;
//	b = t;
//	printf("������Ľ��Ϊ%c,%c", a, b);
//	return 0;
//}
//����
//void function1(double x)
//{
//	double y;
//	x == 0 ?  (y = 0) : (y = x);
//	printf("%lf", y);
//}
//void function2(double a, double b, double c)
//{
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		double s,S;
//		s = (a + b + c) / 2;
//		S = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("%lf", S);
//	}
//	else
//	{
//		printf("�����������ܹ���������\n");
//	}
//}
//void function3(int x)
//{
//	if (x % 2 == 0)
//	{
//		printf("�������ż��\n");
//	}
//	else
//	{
//		printf("�����������\n");
//	}
//}
//void function4(int x, int y,int z)
//{
//	x > y ? printf("%d\n", x) : printf("%d\n", y);
//	z > 100 ? printf("����100\n") : printf("С��100\n");
//}
//
//int main()
//{
//
//	/*int x = 1, y = 3, z = 123;
//	function4(x, y, z);*/
//	/*int x = 3, y = 4;
//	function4(x,y);*/
//	/*int x = 123;
//	function3(x);*/
//	/*double a=1;
//	function1(a);*/
//	/*double a=1, b=2, c=3;
//	function2(a,b,c);*/
//	return 0;
//}