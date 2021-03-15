/*
89페이지 문제 1
상자의 체적 구하는 문제
*/

#include <iostream>

using namespace std;

int main() {

	int leng, wid, hei;
	
	cout << "길이 입력(200 이내) : ";
	cin >> leng;

	cout << "넓이 입력(200 이내) : ";
	cin >> wid;

	cout << "높이 입력(200 이내) : ";
	cin >> hei;

	cout << "상자의 크기 = " << leng * wid * hei << "\n";

	return 0;
}