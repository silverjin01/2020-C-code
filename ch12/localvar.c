#include <stdio.h>

void sub(int param); //함수

int main(void)
{
	//지역변수 선언
	auto int n = 10;
	printf("%d\n", n); //10출력

	//m, sum은 for문 내부의 블록 지역변수
	for (int m = 0, sum = 0; m < 3; m++) //3번 반복
	{
		sum += m; //sum 나온 숫자의 누적의 합
		printf("\t%d %d\n", m, sum); //tab + sum출력
	}

	printf("%d\n", n); //n 참조 가능

	//함수 호출
	sub(20);

	return 0;
}

//매개변수인 param도 지역 변수와 같이 사용
void sub(int param)
{
	//지역변수 local
	auto int local = 100;
	printf("\t%d %d\n", param, local);
}