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
//	printf("请输入一个摄氏温度：\n");
//	scanf("%f", &a);
//	b = Fahrenheit(a);
//	printf("对应的华氏温度为：%f", b);
//	return 0;
//}
//类型的转换
//int main()
//{
//	char a = 0;
//	int b= 0;
//	float c=0;
//	double d=0;
//	printf("%d", sizeof(a * b + d - c));
//	return 0;
//}
//键盘输入一个字符，输出该字符及其对应的ASII码值
//int main()
//{
//	char a=getchar();
//	printf("%c\n", a);
//	printf("%d\n", a);
//	return 0;
//}
//求三角形的面积
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
//	printf("请输入三角形的三边长：");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	S = area(a, b, c);
//	printf("\n三角形的面积是%lf\n", S);
//	return 0;
//}
//输入一个小写字符，将其转化成大写字符并输出
//int main()
//{
//	char c1, c2;
//	c1 = getchar();
//	c2 = c1 - 32;
//	putchar(c2);
//	return 0;
//}
//求球体的表面积和体积
//#define pi 3.141593
//int main()
//{
//	double r,s,v;
//	printf("请输入一个球体的半径：");
//	scanf("%lf", &r);
//	s = 4 * r * r * pi;
//	v = 4.0 / 3.0 * r * r * pi;
//	printf("\n球体的表面积是%lf，体积是%lf\n", s, v);
//	return 0;
//}
//求两个点之间的距离
//int main()
//{
//	float x1, y1, x2, y2,d;
//	printf("请输入两个点的坐标：");
//	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
//	d = sqrt((x1 - x2)*(x1-x2) + (y1 - y2)*(y1-y2));
//	printf("两个点之间的距离是：%f", d);
//	return 0;
//}
//输入一个三位数，输出其各个位数上的数
//int main()
//{
//	int i, a, b, c;
//	printf("请输入一个三位数：");
//	scanf("%d", &i);
//	printf("\n");
//	a = i / 100;
//	b = i / 10 - a * 10;
//	c = i - a * 100 - b * 10;
//	if (a > 10)
//	{
//		printf("输入错误\n");
//	}
//	else if (a == 0)
//	{
//		printf("输入错误\n");
//	}
//	else
//	{
//		printf("该三位数的百位数是%d，十位数是%d，个位数是%d\n", a, b, c);
//	}
//	return 0;
//}
//优化，用函数递归
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
//	printf("请输入一个三位数：");
//	scanf("%d", &a);
//	printf("从大到小的位数是：");
//	digit(a);
//}
//交换两个字符并输出
//int main()
//{
//	char a,b,t;
//	printf("请输入两个字符a，b：");
//	scanf("%c,%c", &a, &b);//空格也是字符
//	t = a;
//	a = b;
//	b = t;
//	printf("交换后的结果为%c,%c", a, b);
//	return 0;
//}
//函数
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
//		printf("这三个数不能构成三角形\n");
//	}
//}
//void function3(int x)
//{
//	if (x % 2 == 0)
//	{
//		printf("这个数是偶数\n");
//	}
//	else
//	{
//		printf("这个数是奇数\n");
//	}
//}
//void function4(int x, int y,int z)
//{
//	x > y ? printf("%d\n", x) : printf("%d\n", y);
//	z > 100 ? printf("大于100\n") : printf("小于100\n");
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