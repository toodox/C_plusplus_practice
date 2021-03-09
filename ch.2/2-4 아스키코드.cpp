//교재 52쪽 char_var.cpp

#include <iostream>

using namespace std;

int main() {

	char ch = 'A'; // 아스키코드값 : 65
	int code = ch;

	cout << ch << ", " << code << endl; // A, 65
	ch += 1; // 아스키코드값 : 66
	code = ch;
	cout << ch << ", " << code << endl; // B, 66

	printf("%c, %d\n", ch, code); // %c : 문자, %d : 숫자 출력

	return 0;
}