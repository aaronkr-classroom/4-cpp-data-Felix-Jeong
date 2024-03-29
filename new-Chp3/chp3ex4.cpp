// chp3ex4.cpp

#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

int main() {

	cout << "Enter all words followed by EOF: " << endl;

	string max = ""; 
	string min = "";

	string word;
	while (cin >> word) {
		// 초기화
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		// 크기 확인
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
		
	}

	// 결과를 출력
		cout << "Max: " << max << endl
		 << "Min: " << min;

	return 0;
}