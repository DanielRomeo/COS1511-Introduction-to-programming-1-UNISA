// Lesson 11: Boolean values:
#include <iostream>
using namespace std;

// Boolean values: True of False:
// To perform operations on boolean values: we use && || !
// 1 is true, 0 is false;
// enter an integer between 10 and 20:
//  10 < j < 20 Logical errors:
// p = 1, p  = 0

int main() {

	int i = 2;
	int j;
	cout << "i < 10 : " << (i < 10) << endl;

	// if statement:
	if (i) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	// integer between 10 and 20:
	cout << "Enter int between 10 and 20" << endl;
	cin >> j;

	// THIS IS A LOGICAL ERROR :  10 < j < 20
	if (j >= 10 && j <= 20) {
		cout << "Thank you " << endl;
	}
	else {
		cout << "your digit is not between 10 and 20" << endl;
	}

	int p;
	p = 0;
	if (p == false) {
		cout << "p is true" << endl;
	}

	return 0;
}

