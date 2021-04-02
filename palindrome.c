//回文数问题。输入一个五位数，判断是否为回文数
//由于是数字，故可将其分解成个、十、百、千、万位，然后来判断
#include <stdio.h>
int main()
{
	int num, w, q, s, g;
	printf("输入一个五位数");   //提示词
	scanf_s("%d",&num);  //五位数的输入
	w = num / 10000;   //万位
	q = num % 10000 / 1000;  //千位
	s = num % 100 / 10;  //十位
	g = num % 10;   //个位
	//比较万位和个位、千位和十位的大小
	if (g == w && s == q)
		printf("is a palindrome\n");
	else
		printf("is not a palindrome\n");
}