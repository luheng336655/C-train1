//��ŵ�����⡣�ݹ����ֹ�������߽���������ֻ��1������ʱ������ֱ���ƶ�
//��n�����Ӵ���A�Ƶ���C�ɷ�Ϊ����:1.��A��n-1�����ӽ���CŲ��B;
//2.����n�����Ӵ�AŲ��C;
//3.��B�ϵ�n-1�����ӽ���AŲ��C
#include <stdio.h>
void Hanoi(int, char, char, char);   //Hanoi�����Ķ���
int n = 0;
//������
void main()
{
	int num;
	printf("input plate's number:\n");  //��ʾ��
	scanf_s("%d", &num);  //��������
	printf("===========================================\n");
	Hanoi(num, 'A', 'B', 'C');   //����Hanoi����
	printf("===========================================\n");  //��ʽ
}

//Hanoi����
void Hanoi(int num, char a, char b, char c)
{
	if (num == 1)
		printf("Step%3d:%c-->%c\n", ++n, a, c);  //Ӧ�ݹ����ֹ�������߽�����):ֻ��һ������ʱֱ���ƶ�
	else
	{
		Hanoi(num - 1, a, c, b);   
		printf("Step%3d:%c-->%c\n", ++n, a, c);
		Hanoi(num - 1, b, a, c);
	}
}