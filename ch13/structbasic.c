#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//���� ���¸� ���� ����ü ����
struct account
{
	char name[20]; //������ �̸�
	int actnum; //���¹�ȣ
	double balance; //�ܰ�
};

int main(void)
{
	//����ü ���� ���� �� �ʱ�ȭ
	struct account mine = { "ȫ�浿",1001,300000 };
	struct account yours;

	strcpy_s(yours.name, 20, "������");
	//strcpy_s(yours.name, 12, "������"); //����
	//yours.name = "������"; //����
	yours.actnum = 1002;
	yours.balance = 500000;

	printf("����üũ�� : %d\n", sizeof(mine)); //����ü ũ�⵵ �˼� ����(sizeof)�� ���ؼ�
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	return 0;
}