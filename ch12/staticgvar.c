#include <stdio.h>

//Ű���� static
static int svar; //���� �������� ����
int gvar; //�������� ����

void increment(); //�Լ� ����
void testglobal(); //�Լ� ����

int main()
{
	for (int count = 1; count <= 5; count++)
		increment();
	printf("�Լ� increment()�� �� %d�� ȣ��Ǿ����ϴ�.\n", svar);

	testglobal(); //�ܺ����� �Լ�
	printf("���� ���� : %d\n", gvar);

	return 0;
}

//�Լ� ����
void increment()
{
	svar++; //�� ����
}