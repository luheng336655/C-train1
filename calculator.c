//�򵥵��������������������a+bȻ��س����a+b=c����ʽ��a,b,c��Ϊ����
//��չ���ṩƽ�������������ݴη��Ĺ���

#include <stdio.h>
#include <math.h>   //math.hͷ�ļ�������ƽ��������sqrt(double x),�ݴη�����pow(float x,float y)
int main()
{
	int x, y, sum;
	char op;  //�����Ķ���
	printf("-------this is a calculator--------\n");  //��������ʽ
	printf("������a+(-,*,/,^)b��ƽ����@,����!:\n");  //��������
	scanf_s("%d", &x);  //�Ӽ�������a��ֵ
	op = getchar();    //�Ӽ��������������š�ע�⣺���ַ�����������һ��ϲ��ʹ��getchar����
	if (op == '@' || op == '!')
	{
		y = 1;  //��ʹ��ƽ��������������ʱ��ֻ��Ҫ�ͻ���������������
	}           //��y=1����ȼ����˿ͻ���������ĸ�����ͬʱҲ����Ӱ����ƽ���������ļ���
	else
	{
		scanf_s("%d", &y);  //��ʹ����������ʱ����Ҫ�ͻ�������������
	}                 //�������������ƿͻ���������ĸ���
	switch (op)
	{
		case '+':printf("=%d", sum = x + y); break;  //�ӷ�����
		case '-':printf("=%d", sum = x - y); break;  //��������
		case '*':printf("=%d", sum = x * y); break;  //�˷�����
		case '/':printf("=%d", sum = x / y); break;  //��������

		//���ݴη��ĺ���Ϊmath.hͷ�ļ��ڵ�pow�����������������������Ϊfloat
		case '^':printf("=%d", sum = pow((float)x, (float)y)); break;   //��������ǿ��ת��
		//��ƽ�����ĺ���Ϊmath.hͷ�ļ��ڵ�sqrt���������������������Ϊdouble
		case '@':printf("=%d", sum = sqrt((double)(x * y))); break;    //��������ǿ��ת��
		case '!':printf("=%d", sum = 1 / (x * y)); break;  //��������
		default:printf("wrong!");
	}
	return 0;
}