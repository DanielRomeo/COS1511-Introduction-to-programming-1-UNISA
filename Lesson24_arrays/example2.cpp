// declaring arrays...
int marks[3];
float prices[5] = {3.4, 5.6, 10.4, 100.3, 20.7};
string names[2] = { "Daniel", "John" };
char chararray[2] = { 'k', 'p'};

// change values in an array...
cout << prices[2]; // 10.4
prices[2] = 1000;
cout << prices[2]; // 1000 

// insert values into an array:
cout << "please insert 3 values" << endl;
for (int k = 0; k < 3; k++) {
	cin >> marks[k];
}


cout << "your values are :" << endl;

// loop to print all values in array:
for (int i = 0; i < 3; i++) { // 0, 1, 2
	cout << marks[i] << endl;
}
