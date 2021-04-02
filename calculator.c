//简单的四则计算器。输入类似a+b然后回车输出a+b=c的形式，a,b,c都为整数
//拓展：提供平方根、求倒数、幂次方的功能

#include <stdio.h>
#include <math.h>   //math.h头文件包含：平方根函数sqrt(double x),幂次方函数pow(float x,float y)
int main()
{
	int x, y, sum;
	char op;  //变量的定义
	printf("-------this is a calculator--------\n");  //计算器格式
	printf("请输入a+(-,*,/,^)b或平方根@,倒数!:\n");  //提醒事项
	scanf_s("%d", &x);  //从键盘输入a的值
	op = getchar();    //从键盘输入算术符号。注意：单字符型数据输入一般喜欢使用getchar函数
	if (op == '@' || op == '!')
	{
		y = 1;  //当使用平方根或求倒数功能时，只需要客户输入两个变量。
	}           //若y=1，则既减少了客户输入变量的个数，同时也不会影响求平方根或倒数的计算
	else
	{
		scanf_s("%d", &y);  //当使用其他计算时，需要客户输入三个变量
	}                 //故用条件语句控制客户输入变量的个数
	switch (op)
	{
		case '+':printf("=%d", sum = x + y); break;  //加法运算
		case '-':printf("=%d", sum = x - y); break;  //减法运算
		case '*':printf("=%d", sum = x * y); break;  //乘法运算
		case '/':printf("=%d", sum = x / y); break;  //除法运算

		//求幂次方的函数为math.h头文件内的pow函数，且其变量的数据类型为float
		case '^':printf("=%d", sum = pow((float)x, (float)y)); break;   //变量类型强制转换
		//求平方根的函数为math.h头文件内的sqrt函数，其变量的数据类型为double
		case '@':printf("=%d", sum = sqrt((double)(x * y))); break;    //变量类型强制转换
		case '!':printf("=%d", sum = 1 / (x * y)); break;  //求倒数运算
		default:printf("wrong!");
	}
	return 0;
}