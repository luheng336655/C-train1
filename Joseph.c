//��ά������������һ����Ա���ӣ��򽫶�Ӧ���������ַ�����Ϊ�մ�
#include <stdio.h>
#include <string.h>
#include <conio.h>  //��C��׼���е�ͷ�ļ�����Console Input/Output������̨����������ļ�д�����ж�����ͨ������̨���������������������ĺ�������Ҫ��һЩ�û�ͨ�������̲����Ķ�Ӧ������
                    //����getch()�����ȵ�

#define N 5
#define LEN 10
void JosephProblem(char[][LEN], int);
main()
{
	char name[N][LEN];
	int i, k;
	printf("��������%d������(ÿ������10�ַ���:\n", N);
	for (i = 0; i < N; i++)
	{
		scanf_s("%s", name[i]);  //��ά�����ֱ��ָ�������ݴ�ŵ�ַ
	}
	printf("\n���������ڼ������˳�:");
	scanf_s("%d", &k);  //����scanf_s������������ʱ��ָ�����ݴ�ŵĵ�ַ�ģ���Ҫ�ڱ���ǰ���ϡ�&��
	JosephProblem(name, k);  //��main�������е���JosephProblem����
	puts("Press any key to exit...");  //C �⺯�� int puts(const char *str) ��һ���ַ���д�뵽��׼��� stdout��ֱ�����ַ��������������ַ������з��ᱻ׷�ӵ������
	getch();
}
void JosephProblem(char ary[][LEN], int k)
{
	int out = 0;
	int counter = 0;
	int idx = -1;
	while (out < N)
	{
		idx++;
		if (idx == N) 
			idx = 0;
		if (strcmp(ary[idx], "\0") == 0)  //����C ��<string.h>�ĺ��� int strcmp(const char *str1, const char *str2) �� str1 ��ָ����ַ����� str2 ��ָ����ַ������бȽϡ�
		{
			continue;  //C �����е� continue ����е��� break ��䡣��������ǿ����ֹ��continue ��������ǰѭ���еĴ��룬ǿ�ȿ�ʼ��һ��ѭ����
					   //���� for ѭ����continue ���ִ�к����������Ȼ��ִ�С����� while �� do...while ѭ����continue �������ִ�������ж����
		}
		else
		{
			counter++;
			if (counter == k)
			{
				out++;
				printf("��%2d���˳���:%s\n", out, ary[idx]);
				strcpy(ary[idx], "\0");  //C ��<string.h>���� char *strcpy(char *dest, const char *src) �� src(Ҫ���Ƶ��ַ���) ��ָ����ַ������Ƶ� dest(ָ�����ڴ洢�������ݵ�Ŀ������)
				counter = 0;
			}
		}
	}
}