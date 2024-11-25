/*
Coding Assignment 5

CS1428.004

Created by Victoria Rossener Mesa on 09/30/2024.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// Input Handling and Subtotal Calculation

	float price;
	int quantity;
	float tax_rate;

	cout << "Enter item's price: ";
	cin >> price;

	cout << "Enter item's quantity: ";
	cin >> quantity;

	float subtotal; 
	subtotal = price * quantity;

	// Sales Tax Calculation

	cout << "Choose sales tax rate (either 5, 7, or 9): ";
	cin >> tax_rate;

	float sales_tax;
	sales_tax = subtotal * (tax_rate / 100);



	// Defining the condition so no other number besides 5, 7 and 9 can be chosen.

	if (tax_rate != 5 && tax_rate != 7 && tax_rate != 9) {
		cout << "Chosen tax rate is not permitted." << endl;
		return 1;
	}

	// Total Cost Calculation + making it clear.

	cout << " " << endl;
	cout << " " << endl; // Making sure that there is a space between the inputs and the final result.

	cout << right;

	// Tried to set width as in the middle as I could, I really liked the way it turned out

	cout << setw(30) << fixed <<  setprecision(2) <<  "Subtotal: " << subtotal << "$." << endl;

	cout << setw(40) << " + " << endl;

	cout << setw(31) << fixed << setprecision(2) << "Sales Tax: " << sales_tax << "$." << endl;

	cout << "--------------------------------------------------------" << endl; 
	
	cout << setw(35) << "Total amount owned: " << subtotal + sales_tax << "$." << endl;
	
	// It was a quite easy one, unfortunatly I don't have much to put on the commments other than what I did.

	return 0;
}