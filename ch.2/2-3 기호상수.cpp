// 기호상수 코드

#include <iostream>

using namespace std;

#define PI 3.141592 // 기호상수 정의, 변수타입 설정 필요 없음. 대문자로 선언

const double PI2 = 3.141592; // 기호상수 정의하는 두번째 방법

int main() {

	double r;
	double area;

	cout << "반지름 입력 : ";
	cin >> r;

	area = r * r * PI;

	cout << "원의 넓이 : " << area << endl;

	return 0;
}