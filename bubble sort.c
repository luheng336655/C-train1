//ð������
#include <stdio.h>
#define N 100  //�궨��
int main()
{
	int i, j, n, t;
	int a[N];  //Ҫ���������
	printf("input a number:\n");  //��ʾ���������������������ָ���
	scanf_s("%d", &n);  //���뼴��Ҫ��������ָ���
	printf("inut %d numbers:\n", n);  //��ʾ�������������

	//����Ҫ�����һ�����֣�����forѭ����������������η���������
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	//ð���㷨
	for (i = 1; i < n; i++)  //��һ��ѭ������ð�ݵĴ���
	{
		for (j = 0; j < n - i; j++)  //�ڶ���ѭ������һ��ð����Ҫ�����ĶԱȴ���
		{
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;  //���ֽ���
			}
		}
	}
	printf("\nThe result is:\n");  //��������ʾ��
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);  //����for���ѭ���������ð�������㷨����������
	return 0;
}