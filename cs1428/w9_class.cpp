#include <iostream>

using namespace std;

int main() {
	// Declare a arrey of float w size of 7 elements
	const int sizeofList = 7;

	// Declare array w ditectly with initialize values
	float list_1[sizeofList] = { 45.5, 35.8, 56.9, 12.4, 67.3, 89.0, 9.6 };


	cout << "List of elements: " << endl;
	// Printout myArray at output terminal
	for (int i = 0; i < sizeofList; i++) {
		cout << "Element at index " << i << " is equal by " << list_1[i] << endl;
 	}

	cout << " *+*+*+*+*+*+**+*+ " << endl;
	// Finding the total of elements in list and Avarage
	double sum = 0;
	double avarage = 0; 

	for (int i = 0; i < sizeofList; i++) {
		sum += list_1[i];  
	}

	/*
	int i = 0;
	while (i < sizeofList) {
		sum += sizeofList[i]; 
		i++;
	}
	*/

	cout << "Sum of elements is: " << sum << endl;
	cout << "Avarage is: " << sum / sizeofList << endl; 

	cout << " *+*+*+*+*+*+**+*+ " << endl;
	
	for (int i = sizeofList - 1; i >= 0; i--) {
		cout << list_1[i] << " " << endl; 
	} 

	cout << " *+*+*+*+*+*+**+*+ " << endl;

	float max = list_1[0];
	for(int i = 1; i < sizeofList; i++) {
		if (list_1[i] > max) {
			max = list_1[i];
		}
	}
	cout << "Maximum element is: " << max << endl;


	cout << " *+*+*+*+*+*+**+*+ " << endl;


	
	return 0;
}