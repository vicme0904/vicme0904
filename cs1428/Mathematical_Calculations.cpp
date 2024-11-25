/* 

Coding Assignment 11

Created by Victoria Rossener Mesa on 11/15/2024

*/

#include <iostream>
#include <iomanip>

using namespace std;

// Declaring functions prototypes:

int factorial(int n); // Prototype for the Factorial function

double power(double base, int expoent); // Prototype for the Power function

double series(int n); // Prototype for the sum of series


int main() {
	int n;
	
	cout << "Please enter a positive integer to calculate the the series: ";
	cin >> n;

	double sum = series(n);

	cout << " " << endl;
	cout << fixed << setprecision(2);
	cout << "The result of the series for n = " << n << " is " << sum << endl; 
	
		return 0;
}

// Function for the factorial
int factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}

// Function for power
double power(double base, int expoent) {
	double result = 1.0;
	for (int i = 0; i < expoent; i++) {
		result *= base;
	}
	return result;
}

// Function for sum of series
double series(int n) {
	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		sum += power(i, 2) / factorial(i); // Sum of the series is i^2 / i;
	}
	return sum;
}



