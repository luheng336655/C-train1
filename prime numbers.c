//�ж�����������һ�������ж��Ƿ�Ϊ����
//��2~sqrt(r)���ж�r�Ƿ�Ϊ����
#include <stdio.h>
#include <math.h>   //����sqrt��duble x)��ͷ�ļ�
int main()
{
	int num, a = 0;  //�������֡��ж��Ƿ�Ϊ�����Ĺؼ�����
	printf("input a number:\n");  //��ʾ��
	scanf_s("%d", &num);   //��������

	//�ж�������ѭ������2~sqrt(num)������ж��Ƿ��ܱ������������
	for (int i = 2; i < sqrt((double)num); i++)  //sqrt��double x)
	{                                            //i�����ж������ķ�Χ
		if (num % i == 0)
			a++;
	}
	//��a��Ϊ0������2~sqrt(num)�����ܱ����������֣���num������
	if (a == 0)
	{
		printf("is prime number\n");
	}
	else
	{
		printf("is not prime number\n");
	}
	return 0;
}
//�ж�������2����2~num-1��Χ���ж�
//�ж�������3����2~num/2֮���ж�


