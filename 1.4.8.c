//һ����������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������������
#include <stdio.h>
#include <math.h>  //ʹ��sqrt����
int main()
{
	int x, y, i;
	for (i = 1; i < 1000; i++)
	{
		x = sqrt((double)(i + 100));
		y = sqrt((double)(x + 268));   //�˴���ƽ����������ʵ�����Զ�����ת����
		if (x* x == i + 100 && y * y == x + 268)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}