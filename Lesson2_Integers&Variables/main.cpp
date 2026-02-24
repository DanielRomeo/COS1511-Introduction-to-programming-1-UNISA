#include <iostream>
using namespace std;

int main()
{
    cout << 1 * 2 * 3 * 4 * 5 << endl;
    cout << "quotient of 20 and 3: " << 20 / 3 << endl;

    // various calculations:
    cout << 1 - (2 + 3 * 4) / 5 << endl;

    // timers :
    cout << "There are " << 60 << " seconds in a minute" << endl;
    cout << "There are " << 60*60 << " seconds in an hour" << endl;
    cout << "There are " << (60 * 60) * 24 << " seconds in a day" << endl;

    // variables: 
    // declare a variable:
    int seconds;
    seconds = 60;
    cout << "How many seconds in an hour? " << seconds * 60 << endl;
    cout << endl;

    // get input from user:
    // get the users age:
    int age;
    cout << "Insert your age!" << endl;
    cin >> age;
    cout << "Your age is : " << age;

    // get user date of birth:
    int dob;
    cout << "What year were you born " << endl;
    cin >> dob;
    cout << "Your age is : " << 2026 - dob << endl;
   


    return 0;
}
