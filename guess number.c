//猜数游戏。要求猜一介于1~10的数，根据用户猜测的数与标准值进行对比，
//并给出提示，以便下次猜测能接近标准值，直到猜中为止
#include <stdio.h>
int main()
{
	int sd = 5, num=0;
	while (num != sd) {
		printf("guess a number between 1 and 10:\n");  //提示词
		scanf_s("%d", &num);  //用户输入猜测的数字

		//用户输入的数字与标准值对比，使用户不断调整其猜测的数字
		if (num > sd)
		{
			printf("too big\n\n");
		}
		else if (num < sd)  //此处若只有else的话，则num=sd也包括进太小的范围内
		{
			printf("too small\n\n");
		}
	}
	printf("success!\n");   //直至猜中，输出成功的提示词
	return 0;
}