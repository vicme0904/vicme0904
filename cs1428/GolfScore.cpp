/* 

Created by Victoria Rossener Mesa
CS 1428.004

Coding Assignment 4

*/

#include <iostream>
using namespace std;

int main() {
	int par, strokes;

	cout << "Enter the number of strokes used: ";
	cin >> strokes;

	cout << "Enter expected number of strokers, par (3, 4, or 5): ";
	cin >> par;


	cout << " " << endl; // This one is jsut to look organized.

	if (par < 3 || par > 5) {
		cout << "Invalid input for par. ";
	}

	// Added conditions after conditions to meet the criteria for each golf's term.

	else if (strokes == par - 2) {
		cout << "Eagle!" << endl;
	}

	else if (strokes == par - 1) {
		cout << "Birdie!" << endl;
	}

	else if (strokes == par) {
		cout << "Par!" << endl;
	}

	else if (strokes == par + 1) {
		cout << "Bogey!" << endl;
	}
	// I've tried one that met par but had to many strokes used, I didn't like it gave no "reaction", so i added the following else line.
	else {
		cout << "Better luck next time!" << endl;
	}

	return 0;
}