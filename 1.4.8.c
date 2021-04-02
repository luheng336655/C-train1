//一个正整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，求该正整数
#include <stdio.h>
#include <math.h>  //使用sqrt函数
int main()
{
	int x, y, i;
	for (i = 1; i < 1000; i++)
	{
		x = sqrt((double)(i + 100));
		y = sqrt((double)(x + 268));   //此处求平方根运算其实可以自动类型转换的
		if (x* x == i + 100 && y * y == x + 268)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}