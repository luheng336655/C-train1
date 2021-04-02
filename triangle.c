//输入三个实数，将三个数看做三条线段，判断是否能构成三角形。
//拓展：若能构成三角形，判断三角形是否为直角、等腰、等边三角形，并求三角形的面积

//三角形判断条件：两边之和小于或等于第三边，则不能构成三角形
#include <stdio.h>
#include <math.h>  //math.h头文件声明了常用的一些数学运算(如：三角函数、反三角函数、双曲三角函数、指数与对数、取整、绝对值、
int main()         //标准化浮点数、取整与取余等）和宏
{
	int a, b, c, p;
	double s;     //变量的定义
	printf("please input three sides of triangle:\n");
	scanf_s("%d %d %d", &a, &b, &c);         //输入三个实数

	//比较两边之和与第三边的关系，从而判断三角形是否存在
	if ((a + b) < c || (a + c) < b || (b + c) < a)
		printf("cannot!\n");
	else
	{
		printf("can!\n");

		//判断三角形的形状
		if (a == b || b == c || a == c)   //  '||'或运算符
		{
			if (a == b == c)              //等于 ’==‘
				printf("等边三角形\n");
			else
				printf("等腰三角形\n");
		}
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			printf("直角三角形\n");

		//求三角形的面积。三角形面积海伦公式：p=(a+b+c)/2,S=sqrt(p*(p-a)*(p-b)*(p-c))
		p = ((a + b + c)/2) * (a + b) * (a + c) * (b + c);
		s = sqrt(p);   //sqrt为根号运算函数，是math.h头文件内的函数
		printf("area is %lf\n", s);
	}
	return 0;
}