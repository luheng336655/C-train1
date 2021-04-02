//九九乘法表（下三角形）
#include <stdio.h>
int main()
{
	int i, j;  //两层循环控制变量
	for (i = 1; i <= 9; i++)  //第一层循环控制下三角形的直角边
	{
		for (j = 1; j <= i; j++)  //第二层循环控制下三角形的斜边
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");  //每一个数所有乘法列完后，要与下一个用换行隔开
	}
	return 0;
}