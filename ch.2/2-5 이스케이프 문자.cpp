

	// 이스케이프 문자

	#include <iostream>
	#include <string>

	using namespace std;

	int main() {

		cout << "아이디와 패스워드를 입력하시오 : \n";
		cout << "id : ____\b\b\b\b";

		string id, pass;

		cin >> id;
		cout << "pass : ____\b\b\b\b";
		cin >> pass;

		cout << "입력된 아이디는 \'" << id << " \'이고, 비밀번호는 \'" << pass << "\' 입니다.\n";

		return 0;
	}