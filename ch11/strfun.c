#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "JAVA 2017 go c#";
	printf("%d\n", strlen("java"));
	printf("%s, ", _wtrlwr(str));
	printf("%s\n", _strupr(str));

	//���ڿ� VA�� ���۵Ǵ� ������ ��ȯ : VA 2013 GO C#
	printf("%s,  ", strstr(str, "VA"));
	//���� A�� ó�� ��Ÿ���� ������ ��ȯ : AVA 2013 GO C#
	printf("%s\n", strchr(str, 'A'));
	
	return 0;
}