// functions:
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {

	const int TOTAL_TEST_MARKS = 4;
	int examMarks[3];
	int testMarks[TOTAL_TEST_MARKS];

	float prices[TOTAL_TEST_MARKS] = {2.3, 4.5, 6.7};

	/*for (int i = 0; i < 3; i++) {
		cout <<"enter a mark" << endl;
		cin >> examMarks[i];
	}*/

	/*cout << "the marks are : " << endl;

	for (auto i = 0; i < 3; i++) {
		cout << examMarks[i] << endl;
	}*/

	// different ways to enter marks:
	examMarks[2] = 100;

	//cout << examMarks[2] << endl;


	// write a program : that asks the teacher how many total number of marks
	// they want to insert, and then set the array size to that amount and 
	// allow them to insert...


	// Then calculate the avarage and display
	for (int i = 0; i < TOTAL_TEST_MARKS; i++) {
		cout << "enter a mark" << endl;
		cin >> testMarks[i];
	}
	cout << endl;

	float avarage;
	float sum =0;
	// get the avarage:
	for (int i = 0; i < TOTAL_TEST_MARKS; i++) {
		sum = sum+ testMarks[i];
	}
	avarage = sum / TOTAL_TEST_MARKS;
	cout << "Your avarage is " << avarage;


	return 0;
}