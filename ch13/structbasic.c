#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//은행 계좌를 위한 구조체 정의
struct account
{
	char name[20]; //계좌주 이름
	int actnum; //계좌번호
	double balance; //잔고
};

int main(void)
{
	//구조체 변수 선언 및 초기화
	struct account mine = { "홍길동",1001,300000 };
	struct account yours;

	strcpy_s(yours.name, 20, "한은진");
	//strcpy_s(yours.name, 12, "한은진"); //가능
	//yours.name = "한은진"; //오류
	yours.actnum = 1002;
	yours.balance = 500000;

	printf("구조체크기 : %d\n", sizeof(mine)); //구조체 크기도 알수 있음(sizeof)로 인해서
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	return 0;
}