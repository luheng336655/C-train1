//�ж��û����������Ƿ�Ϊ���ꡣ
//�����ж������ܱ�4���������ܱ�100���������ܱ�400���������
#include <stdio.h>
void main()
{
	int y;
	printf("input a year:\n");  //�����û�����
	scanf_s("%d", &y);  //�������
	if (y % 4 == 0 && y % 100 != 0)  //%ȡ������==���ڣ�&&�߼��룬��=������
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