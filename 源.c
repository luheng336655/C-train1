//C���ԣ����������


//���������,��ÿ�δ�ӡ���������һ����
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



//�Ե�ǰʱ����Ϊ���������������,�����������ÿ�ζ���ͬ���֣�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));//srand()���Ǹ�rand()�ṩ����seed
	for (int i = 0; i < 10; i++)
	{
		int x = rand();
		printf("%d  ", x);
	}
	return 0;
}



//������������鿨С����ĺ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int x = rand() % 100;//�Բ����������ȡ�࣬������Χ��0-99
		if (x > 70)//x>70���Ƴ鿨�ĸ��ʣ����鵽���ĸ���ֻ��7/10
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