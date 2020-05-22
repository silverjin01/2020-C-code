#include <stdio.h>

//키워드 static
static int svar; //정적 전역변수 선언
int gvar; //전역변수 선언

void increment(); //함수 원형
void testglobal(); //함수 원형

int main()
{
	for (int count = 1; count <= 5; count++)
		increment();
	printf("함수 increment()가 총 %d번 호출되었습니다.\n", svar);

	testglobal(); //외부파일 함수
	printf("전역 변수 : %d\n", gvar);

	return 0;
}

//함수 구현
void increment()
{
	svar++; //수 증가
}