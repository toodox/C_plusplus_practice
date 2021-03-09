

// 불 문자

#include <iostream>

using namespace std;

int main() {

	int n1 = 10, n2 = 20;
	bool b1, b2; // bool문자, C++에 새로 추가된 자료형

	b1 = true; // =1
	b2 = false; // =0
	cout << b1 << ", " << b2 << endl;

	b1 = (n1 >= n2); // False
	b2 = (n2 == 20); // True

	cout << b1 << ", " << b2 << endl;

	cout << boolalpha << b1 << ", " << b2 << endl; // true나 false 출력

	return 0;
}