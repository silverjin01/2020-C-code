#include <stdio.h>

struct date
{
	int year; //년
	int month; //월
	int day; //일
};

//struct date 유형을 간단히 date형으로 사용하기 위한 구문
typedef struct date date; //재정의

int main(void)
{
	//구조체를 정의하면서 바로 자료형 software로 정의하기 위한 구문
	typedef struct
	{
		char title[30];		//제목
		char company[30];	//제작회사
		char kinds[30];		//종류
		date release;		//출시일
	} software;

	software vs = { "비주얼 스튜디오 커퓨니티", "MS", "통합개발환경", {2020, 8, 29} };

	printf("제품명: %s\n",vs.title);
	printf("회사: %s\n", vs.company);
	printf("종류: %s\n", vs.kinds);
	printf("출시일: %d. %d. %d\n", vs.release.year, vs.release.month, vs.release.day);

	return 0;

}