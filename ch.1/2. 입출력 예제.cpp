/*
29쪽 Exercise4
C++ 문자열, 입력 예제
*/

#include <iostream>
#include <string> // 문자열을 처리하기 위한 header file

using namespace std;

int main() {

	string s1, s2; // 문자열을 저장하기 위한 type

	cout << "당신의 이름을 입력하시오 : "; //표준 출력
	cin >> s1; // 표준 입력(주의 : 공백까지만 읽는다. ex: abc def -> abc까지만)

	cout << s1 << "씨 환영합니다.\n"; // 연속된 변수나 문자열 출력
	cout << "무엇을 해드릴까요? : ";
	cin >> s2;
	cout << s2 << "는 자네가 하게!\n\n";
		// = cout << s2 << "는 자네가 하게! << endl << endl;"

	return 0;
}
