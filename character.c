//字符类别判断。要求判别键盘输入字符的类别
#include <stdio.h>
int main()
{
	char m;  //字符类型变量的定义
	printf("input a character\n");  //提醒输入
	m = getchar();
	//由输入字符的ASCII码来判断字符类别
	if (m <= 32)
	{
		printf("为控制字符\n");    //控制字符即表示某一控制功能的字符，如换行、空格、回车、删除等
	}
	else if (m >='0' && m <='9')
	{
		printf("为数字\n");
	}    //前两分支没有都有''，是因为32为控制字符的最大ASCII码，
	//而数字的ASCII码并非0或9，此处的0和9是字符形态
	else if (m >='A' && m <='Z')
	{
		printf("为大写字母\n");
	}
	else if(m >='a'&&m <='z')
	{
		printf("为小写字母\n");
	}
	else
	{
		printf("为其他字符\n");
	}    //用else if嵌套语句来实现分支
	return 0;
}