//判断素数。输入一个数，判断是否为素数
//在2~sqrt(r)中判断r是否为素数
#include <stdio.h>
#include <math.h>   //函数sqrt（duble x)的头文件
int main()
{
	int num, a = 0;  //输入数字、判断是否为素数的关键变量
	printf("input a number:\n");  //提示词
	scanf_s("%d", &num);   //数字输入

	//判断素数的循环：在2~sqrt(num)中逐次判断是否能被输入的数整除
	for (int i = 2; i < sqrt((double)num); i++)  //sqrt（double x)
	{                                            //i控制判断素数的范围
		if (num % i == 0)
			a++;
	}
	//若a不为0，则在2~sqrt(num)中有能被整除的数字，则num非素数
	if (a == 0)
	{
		printf("is prime number\n");
	}
	else
	{
		printf("is not prime number\n");
	}
	return 0;
}
//判断素数法2：在2~num-1范围内判断
//判断素数法3：在2~num/2之中判断


