//二维数组存放人名，一旦人员出队，则将对应数组姓名字符串设为空串
#include <stdio.h>
#include <string.h>
#include <conio.h>  //非C标准库中的头文件。是Console Input/Output（控制台输入输出）的简写，其中定义了通过控制台进行数据输入和数据输出的函数，主要是一些用户通过按键盘产生的对应操作，
                    //比如getch()函数等等

#define N 5
#define LEN 10
void JosephProblem(char[][LEN], int);
main()
{
	char name[N][LEN];
	int i, k;
	printf("依次输入%d个人名(每个不超10字符）:\n", N);
	for (i = 0; i < N; i++)
	{
		scanf_s("%s", name[i]);  //二维数组可直接指向其数据存放地址
	}
	printf("\n输入数到第几个人退出:");
	scanf_s("%d", &k);  //利用scanf_s函数输入数据时是指向数据存放的地址的，故要在变量前加上‘&’
	JosephProblem(name, k);  //在main主函数中调用JosephProblem函数
	puts("Press any key to exit...");  //C 库函数 int puts(const char *str) 把一个字符串写入到标准输出 stdout，直到空字符，但不包括空字符。换行符会被追加到输出中
	getch();
}
void JosephProblem(char ary[][LEN], int k)
{
	int out = 0;
	int counter = 0;
	int idx = -1;
	while (out < N)
	{
		idx++;
		if (idx == N) 
			idx = 0;
		if (strcmp(ary[idx], "\0") == 0)  //出自C 库<string.h>的函数 int strcmp(const char *str1, const char *str2) 把 str1 所指向的字符串和 str2 所指向的字符串进行比较。
		{
			continue;  //C 语言中的 continue 语句有点像 break 语句。但它不是强制终止，continue 会跳过当前循环中的代码，强迫开始下一次循环。
					   //对于 for 循环，continue 语句执行后自增语句仍然会执行。对于 while 和 do...while 循环，continue 语句重新执行条件判断语句
		}
		else
		{
			counter++;
			if (counter == k)
			{
				out++;
				printf("第%2d个退出者:%s\n", out, ary[idx]);
				strcpy(ary[idx], "\0");  //C 库<string.h>函数 char *strcpy(char *dest, const char *src) 把 src(要复制的字符串) 所指向的字符串复制到 dest(指向用于存储复制内容的目标数组)
				counter = 0;
			}
		}
	}
}