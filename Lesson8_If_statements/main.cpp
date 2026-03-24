// lesson 8: If statments:
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	age = 2;

	string name;
	name = "daniel";
	string secondName;
	secondName = "frank";

	if (age <= 1) {
		cout << "You are are newborn";
	}
	else if (age > 1 && age < 13) {
		cout << "You are a child";
	}
	else if (age >= 13 && age <= 19) {
		cout << "You are a teenager";
	}
	else if (age > 19 && age <= 65) {
		cout << "You are an adult" << endl;
	}
	else {
		cout << "you are on pension" << endl;
	}


	if (age > 19) {
		cout << "you are an adult" << endl;

		if (age > 30) {
			cout << "You are an old person " << endl;
		}
	}


	// or in if statements:
	if ( (name == "daniel" || secondName == "sam") && (age > 20) ) {
		cout << "welcome daniel " << " you are an adult" << endl;
	}
	else {
		cout << "You are either not Daniel/Sam, or you are not an adult";
	}
	return 0;
}
