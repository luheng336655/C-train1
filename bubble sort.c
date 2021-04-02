//冒泡排序
#include <stdio.h>
#define N 100  //宏定义
int main()
{
	int i, j, n, t;
	int a[N];  //要排序的数组
	printf("input a number:\n");  //提示输入排序数组所含的数字个数
	scanf_s("%d", &n);  //输入即将要排序的数字个数
	printf("inut %d numbers:\n", n);  //提示输入排序的数组

	//输入要排序的一串数字，利用for循环将输入的数字依次放入数组中
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	//冒泡算法
	for (i = 1; i < n; i++)  //第一层循环控制冒泡的次数
	{
		for (j = 0; j < n - i; j++)  //第二层循环控制一次冒泡所要经过的对比次数
		{
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;  //数字交换
			}
		}
	}
	printf("\nThe result is:\n");  //输出结果提示词
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);  //利用for语句循环输出经过冒泡排序算法排序后的数组
	return 0;
}