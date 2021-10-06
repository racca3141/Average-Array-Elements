// Emerson Racca
// 10/4/2021
// Lab 6b - Average Array Elements

/*
Create a program that calculates the average of 5 array elements.  Make use of an array to store the values.

const int size = 5;
double data[size];
Send this array to a function that actually calculates and returns the average.

1. Tell the user what the program does.
2. Prompt the user to enter the integer scores.  ( Use a for loop to do this. )
3. Create and implement a function with prototype:  ( Use a for loop to do this. )

double average( int a[], const int size);
4. Output the results in the main function.
5. Ask the user if he wishes to run the program again.

*/

#include<iostream>
using namespace std;

double average(double a[], const int size);

int main(void) {

	char runAgain;

	const int size = 5;
	double data[size];

	cout << "Average Array Elements\n";
	cout << "This program calculates the average of 5 array elements.\n\n";

	// A function wasn't asked for the data entry.
	do {
		for (int i = 0; i < size; i++) {
			cout << "Input a number: ";
			cin >> data[i];
		}

		cout << "\nAverage = " << average(data, size) << endl;

		cout << "\n\nDo you want to run it again (y or n)? ";
		cin >> runAgain;
		cout << endl;

	} while (runAgain == 'y');

	return 0;
}

double average(double a[], const int size) {
	double total = 0;
	for (int c = 0; c < size; c++)
		total = total + a[c];
	return (total / size);
}