//判断用户输入的年份是否为闰年。
//闰年判定规则：能被4整除但不能被100整除，或能被400整除的年份
#include <stdio.h>
void main()
{
	int y;
	printf("input a year:\n");  //提醒用户输入
	scanf_s("%d", &y);  //年份输入
	if (y % 4 == 0 && y % 100 != 0)  //%取余数，==等于，&&逻辑与，！=不等于
	{
		printf("is a leap year\n");
	}
	else
	{
		if (y % 400 == 0)
			printf("is a leap year\n");
		else
			printf("is not a leap year\n");
	}
}