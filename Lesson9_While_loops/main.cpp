// Lesson 9: While loops:
#include <iostream>
#include <string>
using namespace std;


int main() {

	int i = 0;
	int j = 0;
	float money = 20;

	while (i != 10)
	{
		cout << "i is : " << i << endl;
		i++;
	}

	do
	{
		cout << "My money is : " << money << endl;
		money += money;
		j++;
	} while (j < 6);

	// Main activity program:
	// program that lets the user insert prices of items in grocery store:
	// program : has VAT_RATE, total, vatAmount, totalAmountWithVATincluded. 
	const float VAT_RATE = 0.15;
	float total = 0, vatAmount = 0, totalAmountWithVATincluded = 0;

	float price = 0.0 ;
	while (true) {
		cout << "Enter the price of your product." << endl;
		cin >> price;
		
		if (price == 0.00) {
			break;
		}

		total += price;
		vatAmount = total * VAT_RATE;
		totalAmountWithVATincluded = total + vatAmount;
	}
	cout << "Your total with vat  is : " << totalAmountWithVATincluded;
	

	return 0;
}
