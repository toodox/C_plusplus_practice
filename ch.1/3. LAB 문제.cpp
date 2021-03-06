/*
교재 30쪽 LAb 문제
예제 program
두 수를 입력 받아 합을 구하는 문제
*/

#include <iostream>
#include <string> 

using namespace std;

int main() {

	int n1, n2;
	int sum;

	cout << "첫 번째 수를 입력하시오 : ";
	cin >> n1;
	cout << "두 번째 수를 입력하시오 : ";
	cin >> n2;

	sum = n1 + n2;

	cout << "두 수의 합은 " << sum << " 입니다." << "\n" << endl;

	return 0;
}

