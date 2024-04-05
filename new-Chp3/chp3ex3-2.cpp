// chp3ex3-2.cpp

#include <iostream>
#include <vector>
#include <unordered_map> // { word: count} word있으면 count증가

using namespace std; //길게 쓸 필요 없음

int main() {

	vector<string> words;
	unordered_map<string, int> wordCount;

	cout << "Enter words (CTRL+Z to stop): " << endl;

	// 1. Read words (cin)
	string word;
	while (cin >> word) {
		words.push_back(word);
	}

	// 2. Count words (for)
	for (auto& w : words) { //배열 words의 값을 자동으로 w에 넣겠다는 말 
		wordCount[w]++;
	}

	// 3. Print results 
	cout << "Word count: " << endl;
	for (auto& pair : wordCount) {
		cout << pair.first << ": " << pair.second << endl;
	}

	return 0;
}