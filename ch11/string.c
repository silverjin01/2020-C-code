#include <stdio.h>

int main(void)
{
	char c[] = "C C++ Java";
	printf("%s\n", c);
	c[5] = '\0'; //null ���ڿ� ���� ���ڿ� �и�
	printf("%s\n%s\n", c, (c + 6));

	//���� �迭�� �� ���Ҹ� �ϳ� �ϳ� ����ϴ� ���
	c[5] = ' '; //�� ���ڸ� �� ���ڷ� �ٲپ� ���ڿ� ����
	char* p = c;
	while (*p)
		printf("%c", *p++);
	printf("\n");

	return 0;
}