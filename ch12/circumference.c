//이미 외부에서 선언된 전역변수임을 알리는 선언
extern double PI; //double은 생략은 가능하나 써주는 것을 권장

double getCircum(double r)
{
	return 2 * r * PI; //전역변수 PI 참조
}