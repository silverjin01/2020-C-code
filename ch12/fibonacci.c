/* �Ǻ����� ���� ��� */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count; //��������

void fibonacci(int prev_number, int number); //�Լ�����

void main() {
	auto prev_number = 0, number = 1; //�ڵ� ��������

	printf("�Ǻ������� �� �� ���ұ��?(3 �̻�) >> ");
	//���������� ǥ���Է����� ����
	scanf("%d", &count);
	if (count <= 2)
		return 0;

	printf("1 ");
	fibonacci(prev_number, number);
	printf("\n");
}

void fibonacci(int prev_number, int number) {// �Ű����� = ��������
	static int i = 1; //���� �������� i

	//�������� count�� �Լ��� ���� ���������� ��
	while (i++ < count) {
		int next_num = prev_number + number; //��������
		prev_number = number;
		number = next_num;
		printf("%d ", next_num);
		fibonacci(prev_number, number);
	}
}