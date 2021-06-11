//汉诺塔问题。递归的终止条件（边界条件）：只有1个盘子时，可以直接移动
//将n个盘子从座A移到座C可分为三大步:1.将A上n-1个盘子借助C挪到B;
//2.将第n个盘子从A挪到C;
//3.将B上的n-1个盘子借助A挪到C
#include <stdio.h>
void Hanoi(int, char, char, char);   //Hanoi函数的定义
int n = 0;
//主函数
void main()
{
	int num;
	printf("input plate's number:\n");  //提示词
	scanf_s("%d", &num);  //输入数字
	printf("===========================================\n");
	Hanoi(num, 'A', 'B', 'C');   //调用Hanoi函数
	printf("===========================================\n");  //格式
}

//Hanoi函数
void Hanoi(int num, char a, char b, char c)
{
	if (num == 1)
		printf("Step%3d:%c-->%c\n", ++n, a, c);  //应递归的终止条件（边界条件):只有一个盘子时直接移动
	else
	{
		Hanoi(num - 1, a, c, b);   
		printf("Step%3d:%c-->%c\n", ++n, a, c);
		Hanoi(num - 1, b, a, c);
	}
}