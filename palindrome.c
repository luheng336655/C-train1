//���������⡣����һ����λ�����ж��Ƿ�Ϊ������
//���������֣��ʿɽ���ֽ�ɸ���ʮ���١�ǧ����λ��Ȼ�����ж�
#include <stdio.h>
int main()
{
	int num, w, q, s, g;
	printf("����һ����λ��");   //��ʾ��
	scanf_s("%d",&num);  //��λ��������
	w = num / 10000;   //��λ
	q = num % 10000 / 1000;  //ǧλ
	s = num % 100 / 10;  //ʮλ
	g = num % 10;   //��λ
	//�Ƚ���λ�͸�λ��ǧλ��ʮλ�Ĵ�С
	if (g == w && s == q)
		printf("is a palindrome\n");
	else
		printf("is not a palindrome\n");
}