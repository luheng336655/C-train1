//������Ϸ��Ҫ���һ����1~10�����������û��²�������׼ֵ���жԱȣ�
//��������ʾ���Ա��´β²��ܽӽ���׼ֵ��ֱ������Ϊֹ
#include <stdio.h>
int main()
{
	int sd = 5, num=0;
	while (num != sd) {
		printf("guess a number between 1 and 10:\n");  //��ʾ��
		scanf_s("%d", &num);  //�û�����²������

		//�û�������������׼ֵ�Աȣ�ʹ�û����ϵ�����²������
		if (num > sd)
		{
			printf("too big\n\n");
		}
		else if (num < sd)  //�˴���ֻ��else�Ļ�����num=sdҲ������̫С�ķ�Χ��
		{
			printf("too small\n\n");
		}
	}
	printf("success!\n");   //ֱ�����У�����ɹ�����ʾ��
	return 0;
}