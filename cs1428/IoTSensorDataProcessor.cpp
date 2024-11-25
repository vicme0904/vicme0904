// 
// Coding Assignment 3
// 
// CS1428.004
// 
// Created by Victoria Rossener Mesa on 09/23/2024

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	//Defining variables for the temperatures
	// Task 1: Sensor Data Simulation (Random Numbers) 
	// Task 2: Data Comparison and Alerts (Comparison Operations)
	// Task 3: Data Processing (Math Operations) 
	// Task 4: Sensor Status Encoding (Bitwise Operations)
	// Task 5: Logging Sensor Data


	// Defining variables 
	float temp;
	int max = 15.0;
	int min = 15.0;
	static_cast<float>(max);
	static_cast<float>(min);
	int hum;
	srand(time(0)); // Randomize temperature and humidity numbers every time the code runs


	// Defining Temperature and Humidity variables

	temp = min + (rand() % max);
	hum = (rand() % 30) + 30;


	// Temperature and Humidity in the Living Room:
	string LivingRoom = "Living Room: ";
	int bitwiseTLR = 1 & 0;
	int bitwiseHLR = 1 | 0;

	cout << LivingRoom << endl;
	cout << "Temperature: " << temp << " Celcius." << setw(20) <<  "Humidity: " << hum << "%." << endl;


	cout << " " << endl;

	if (temp > 24) {
		cout << "Caution! Room is too hot!" << endl;
		cout << "Bitwise Counter: " << bitwiseTLR << endl;
	}
	if (hum < 40) {
		cout << "Caution! Room's humidity is low!" << endl;
		cout << "Bitwise Counter: " << bitwiseHLR << endl;
	}


	// Temperature and Humidity in the Kitchen:

	string Kitchen = "Kitchen: ";
	float temp2;
	int hum2;
	int bitwiseTK = 1 & 0;
	int bitwiseHK = 1 | 0;

	temp2 = min + (rand() % max);
	hum2 = 30 + (rand() % 30);

	cout << " " << endl;
	cout << Kitchen << endl;
	cout << "Temperature: " << temp2 << " Celcius." << setw(20) << "Humidity: " << hum2 << "%." << endl;


	cout << " " << endl;

	if (temp2 > 24) {
		cout << "Caution! Room is too hot!" << endl;
		cout << "Bitwise Counter: " << bitwiseTK << endl;
	}

	if (hum2 < 40) {
		cout << "Caution! Room's humidity is low!" << endl; 
		cout << "Bitwise Counter: " << bitwiseHK << endl;
	}

	// Temperature and Humidity in the Bedroom:

	string Bedroom = "Bedroom: ";
	float temp3;
	int hum3;
	int bitwiseTB = 1 & 0;
	int bitwiseHB = 1 | 0;

	temp3 = min + (rand() % max);
	hum3 = 30 + (rand() % 30); 

	cout << " " << endl; 
	cout << Bedroom << endl;
	cout << "Temperature: " << temp3 << " Celcius." << setw(20) << "Humidity: " << hum3 << "%." << endl; 


	cout << " " << endl;

	if (temp3 > 24) {
		cout << "Caution! Room is too hot!" << endl;
		cout << "Biwise Counter: " << bitwiseTB << endl;
	} 

	if (hum3 < 40) {
		cout << "Caution! Room's humidity is low!" << endl;
		cout << "Bitwise Counter: " << bitwiseHB << endl;
	}
	// Calculating the avarage of temperature across the sensor in Celcius and Farhenheit.

	const int NumSensors = 3;
	float avarage = (temp + temp2 + temp3) / NumSensors;

	cout << " " << endl;
	cout << " " << endl; 
	cout << "The avarage temperature across the rooms is " << setprecision(3) << avarage << " Celcius."
		<< " Or " << (avarage * (9.0 / 5.0)) + 32 << " Fahrenheit." << endl;
	

	return 0;
}