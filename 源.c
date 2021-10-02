//C语言：随机数生成


//生成随机数,但每次打印的随机数是一样的
#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int i = 1; i < 20; i++) {
		int x = rand();
		printf("%d\t", x);
	}
	return 0;
}



//以当前时间作为随机数触发的种子,生成随机数（每次都不同数字）
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));//srand()就是给rand()提供种子seed
	for (int i = 0; i < 10; i++)
	{
		int x = rand();
		printf("%d  ", x);
	}
	return 0;
}



//利用随机数，抽卡小程序的核心
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int x = rand() % 100;//对产生的随机数取余，其结果范围是0-99
		if (x > 70)//x>70控制抽卡的概率，即抽到卡的概率只有7/10
		{
			printf("congratulation!\n");
		}
		else
		{
			printf("try again.\n");
		}
	}
	return 0;
}