//输入成绩，判断等级。根据用户输入的期末考成绩，输出相应的成绩评定信息。
//90以上为优，80-90为良，60-80为中，低于60为差
#include <stdio.h>
int main()
{
	float mark;   //变量类型：单精度浮点型
	printf("input your score:\n");  //提示用户输入成绩
	scanf_s("%f", &mark);   //%f表示输入或输出浮点型数据
	//用else if嵌套语句来分类输出相应成绩评定信息
	if (mark >= 90)
		printf("优\n");  //若90以上，则输出优
	else if (80 <= mark && mark<= 90)  //&&是逻辑和
		printf("良\n");  //80-90，输出良
	else if (60 <= mark && mark <= 80)
		printf("中\n");  //60-80，输出中
	else if (mark < 60)
		printf("差\n");  //低于60，输出差
	return 0;
}