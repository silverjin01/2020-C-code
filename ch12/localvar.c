#include <stdio.h>

void sub(int param); //�Լ�

int main(void)
{
	//�������� ����
	auto int n = 10;
	printf("%d\n", n); //10���

	//m, sum�� for�� ������ ��� ��������
	for (int m = 0, sum = 0; m < 3; m++) //3�� �ݺ�
	{
		sum += m; //sum ���� ������ ������ ��
		printf("\t%d %d\n", m, sum); //tab + sum���
	}

	printf("%d\n", n); //n ���� ����

	//�Լ� ȣ��
	sub(20);

	return 0;
}

//�Ű������� param�� ���� ������ ���� ���
void sub(int param)
{
	//�������� local
	auto int local = 100;
	printf("\t%d %d\n", param, local);
}