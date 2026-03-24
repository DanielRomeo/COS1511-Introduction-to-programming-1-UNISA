// lesson 7: String and charactor variables:
#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s;
	string firstname;
	string lastname;
	
	cout << "Enter your name and surname: " << endl;
	getline(cin, s, '\n');
	cout << "Your name and surname is : " << s << endl;

	// you cannot use getline() after cin >>
	//Enter your name and surname... 'de paul'
	cout << "Enter your name: " << endl;
	cin >> firstname;
	cin.get();
	cout << "Enter your lastname : " << endl;
	getline(cin, lastname, '\n');

	cout << "Your name and surname is : " << firstname << " " << lastname << endl;

	// -----------------------------------------
	// CHARS

	string mystring;
	char c;
	char nextCharector;

	cout << "Enter a charector : " << endl;
	cin >> c;
	nextCharector = c + 25;

	cout << "Your char is : " << nextCharector << endl;


	return 0;
}
