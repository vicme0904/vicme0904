/* 

-*-*-*-*-*-*-*-

Coding Assignment 7: Menu-Driven Program with Loops and Switch-Case in C++

Created by Victoria Rossener Mesa on 10/11/2024

-*-*-*-*-*-*-*-

*/


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main() {

	//Defining variables
	int choice = 0;
	int n = 0;
	int count = 0;
	int result;
	// My IDE kept asking for a defined value for the variables, I set them all as 0
	
	while (true) {
		// Building the menu
		do {
			cout << " " << endl; 
			cout << "Menu Options: " << endl;
			cout << " " << endl;
			cout << "1. Calculate Factorial of N " << endl;
			cout << "2. Calculate the Power of A^B " << endl;
			cout << "3. Multiply Two Numbers " << endl;
			cout << "4. Generate Random Number " << endl;
			cout << "5. Exit " << endl;
			cout << " " << endl;
			cout << "Enter you choice: ";
			cin >> choice;
			cout << " " << endl;
		} while (choice < 1 || choice > 5);

		// Setting what each number will do:
		switch (choice) {

		case 1: { // First choice, factorial of N:
			result = 1;
			count = 1;
			cout << "Enter integer N: ";
			cin >> n;

			while (count <= n) {
				result *= count;
				count++;
			}
			cout << "Factorial of " << n << " is: " << result << endl;

		} // While-loop is still a bit confusing for me, got this one wrong a couple of times
			  break;


		case 2: { // Second choice, A^B
			int a = 0;
			int b = 0;
			int result = 1;
			cout << "Enter a base to be powered: ";
			cin >> a;
			cout << "Enter how much will be powered by: ";
			cin >> b;

			for (int i = 0; i < b; i++) {
				result = pow(a, b);
			}

			cout << "Result of " << a << " powered by " << b << " is: " << result << endl;

		} // This one was way easier to do, but I still get quite confused when reading what is inside of the For-loop
			  break;

		case 3: { // Third choice, A * B
			int a = 0;
			int b = 0;
			int result = 1;
			cout << "Enter first variable: ";
			cin >> a;
			cout << "Enter second variable: ";
			cin >> b;
			
			for (int i = 0; i < b; i++) {
				result = a * b; 
			}

			cout << "The mutiplication of " << a << " and " << b << " is: " << result << endl;

		} // This was an easy one as well, altough I didn't thoght much on the For-loop, simply did the same I did on case 2
			  break;

		case 4: { // Random number
			int a;
			int result;
			srand(time(0));
			cout << "Enter a maximum integer to be randomized: ";
			cin >> a; 

			result = (rand() % a + 1);

			cout << "Your random number is: " << result << "!" << endl;

		} // At first I couldn't remember how to do, after seen the sensor assignment I remembered.
			  break;

		case 5: // Exiting program, nothing unusual 
			cout << "Exiting program..." << endl;
			exit(0);
		}

	}
	return 0;
}