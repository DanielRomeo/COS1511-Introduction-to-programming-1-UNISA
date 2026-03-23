// Lesson 6: Floating point numbers
#include <iostream>

using namespace std;

// Get the avarage marks of a student and display the value:
// Explaining precision and rounding off...

int main() {

	// declare a floating point number:
	float number1 = 12.4;
	float number2 = 4;
	//cout << number1+ number2 << endl;

	// Get the 3 prices from the store and add vat to the total, display results:
	const float VAT_RATE = 0.15;
	float price1, price2, price3;
	float total;
	float vatAmount;
	float vatIncludedTotal;

	cout << "Enter the 3 prices : " << endl;
	cin >> price1 >> price2 >> price3;
	total = price1 + price2 + price3; // 10 10 10 = 30 ... 30 * vatrate.. vat amount...
	vatAmount = VAT_RATE * total; 
	vatIncludedTotal = total + vatAmount;

	cout << "Total prices for your goods are : " << total << endl;
	cout << "Total vat Amount is : " << vatAmount << endl;
	cout << "Total vatIncluded amount that you pay is : " << vatIncludedTotal << endl; 

	// ---------

	//float number;
	//cout << "Enter a number: " << endl;
	//cin >> number;

	//cout.setf(ios::fixed); // sets to fixed point notation
	//cout.precision(3); // then this is for rounding off
	//cout << number;



	return 0;
}

