/*
교재 41쪽
integer.cpp
예제, Exercise 문제 다 풀어보기
*/

#include <iostream>
#include <climits>  //C언어의 limit.h : 각 변수가 가지고 있는 최소값과 최대값을 가지고 있는 헤더파일 {cf) math -> cmath}

using namespace std;

int main() {

	short year = SHRT_MAX;  // short형 변수가 가질수 있는 최대값 대입
	int sale = INT_MAX;
	long total_sale = LONG_MAX;
	long long dlong = LLONG_MAX; // 8바이트 정수

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;


	cout << year << endl;
	cout << sale << endl;
	cout << total_sale << endl;
	cout << dlong << endl;

	cout << SHRT_MIN << endl;
	cout << INT_MIN << endl;
	cout << LONG_MIN << endl;
	cout << LLONG_MIN << endl;

	return 0;
}

/*
 과제
  - 89쪽 Programming 7,8,9,15,18
  - cmath, const, #define 등 사용
  - 제출 : 일요일(14일) 밤 12시 까지
*/