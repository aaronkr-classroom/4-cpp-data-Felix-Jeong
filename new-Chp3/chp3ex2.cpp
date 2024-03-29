// chp3ex2.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin;
using std::endl; using std::vector;

int main() {
	cout << "enter all values" << endl;

	vector<double> val;

	double x;

	while (cin >> x) {
		val.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = val.size();
	if (size == 0) {
		cout << endl << "You must enter your grades."
			"Please try agran." << endl;
		return 1; 
	}

	sort(val.begin(), val.end());

	vec_sz q1 = size / 4;
	vec_sz q2 = size / 2;
	vec_sz q3 = 3 * size / 4;

	double q1_val, q2_val, q3_val;
	q1_val = size % 4 == 0 ? (val[q1] + val[q1 - 1]) / 2 : val[q1];
	q2_val = size % 2 == 0 ? (val[q2] + val[q2 - 1]) / 2 : val[q2];
	q3_val = 3 * size % 4 == 0 ? (val[q3] + val[q3 - 1]) / 2 : val[q3];

	cout << "Q1: " << q1_val << endl
		<< "Q2: " << q2_val << endl
		<< "Q3: " << q3_val << endl;

	return 0;
}
