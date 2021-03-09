
//오버플로우


#include <iostream>
#include <climits>

using namespace std;

int main() {

	short s_money = SHRT_MAX; // 최대값으로 초기화
	unsigned short u_money = USHRT_MAX; // 최대값으로 초기화


	s_money = s_money + 1; // 오버플로우 발생!
	cout << "s_money = " << s_money << endl;

	u_money = u_money + 1; // 오버플로우 발생!
	cout << "u_money = " << u_money << endl;

	/*
		오버플로우 : 변수가 나타낼 수 있는 범위를 넘는 숫자를
		저장하려고 할 때 발생
	*/



	return 0;
}