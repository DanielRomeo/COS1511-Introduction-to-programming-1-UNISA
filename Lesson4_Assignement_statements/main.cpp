// Assignment statements:
// program to calculate miutes, hours and seconds:
#include <iostream>


// write a program that given only seconds, how many minutes and seconds are there?

// YOUR HOMEWORK: write a program that: given (2 times), calculate the total minutes and seconds.

int main() {

	// 
	int seconds;
	int totalSeconds;
	int totalMinutes;
	std::cin >> seconds;
	totalMinutes = seconds / 60;
	totalSeconds = seconds % 60;
	
	std::cout << "Total minutes are : " << totalMinutes << '\n';
	std::cout << "Total seconds are : " << totalSeconds << '\n';
	std::cout << "Add a number on to another number using the SUM variable:" << std::endl;


	
	// ---------------------------------------------------------------
	// MORE ASSIGNMENT OPERATORS:
	int sum;
	int negator;
	int multiplyer;
	sum = 100;
	sum += 1;
	sum += 9;
	negator = 50;
	negator -= 30;
	multiplyer = 10;
	//multiplyer = multiplyer * 5;
	multiplyer *= multiplyer;

	std::cout << "Sum is equal to :" << sum << '\n';
	std::cout << "Negator is equal to :" << negator << '\n';
	std::cout << "Multiplyer is equal to : " << multiplyer << "\n";

	return 0;
}