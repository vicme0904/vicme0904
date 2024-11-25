/* 1. Create a New C++ Project:
    Open your C++ IDE and create a new project named FormattedOutput.
    main.cpp
    Coding Assignment 2

    Created by Victoria Rossener Mesa on 09/19/2024
*/

#include <iostream>
#include <iomanip> // For setw, setprecision, fixed
#include <cmath>
#include <string>
using namespace std;

int main() {

    // 2. Declare Variables for Different Primitive Data Types :
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    bool myBool;
    
    // 3. Prompt the user to enter values for each variable.
    /* On this step I've learnt how to ask the user for the input using the output */

    cout << "Enter an integer: ";
    cin >> myInt;

    cout << "Enter a floating-point number: ";
    cin >> myFloat;

    cout << "Enter a double-precision number: ";
    cin >> myDouble;

    cout << "Enter a single character: ";
    cin >> myChar;

    cout << "Enter a boolean value (0 or 1): ";
    cin >> myBool;

    cout << endl;


    // 4. Output the values with formatted output using setw, setprecision, and fixed
    /* On this step I've learnt how to format the code the way I'd like it to me shown */

    cout << setw(20) << "Data Type" << setw(20) << "Value" << endl;
    cout << setw(20) << "Integer" << setw(20) << myInt << endl;
    cout << setw(20) << "Float" << setw(20) << fixed << setprecision(3) << myFloat << endl;
    cout << setw(20) << "Double" << setw(20) << fixed << setprecision(3) << myDouble << endl;
    cout << setw(20) << "Character" << setw(20) << myChar << endl;
    cout << setw(20) << "Boolean" << setw(20) << myBool << endl;

    cout << endl;
   

    cout << "--------------------------------------------" << endl;


    // 5. Performing Basic Math Operations
    /* On this step I've learnt how to make the code perform basic math operations */

    int a;
    int b;

    cout << "Performing Basic Math Operations." << endl;

    cout << "Enter number for a: ";
    cin >> a;

    cout << "Enter number for b: ";
    cin >> b;

    cout << left << "(Addtion) a + b = " << (a + b) << endl;
    cout << "(Subtration) a - b = " << (a - b) << endl;
    cout << "(Multiplication) a * b = " << (a * b) << endl;
    cout << "(Division) a / b = " << (a / b) << endl;
    cout << "(Modulus) a % b = " << (a % b) << endl;
  

    cout << "--------------------------------------------" << endl;


    // 6. Display the size of each data type using sizeof and formatted output
    /* On this step I've learnt how to display the size of each data type */

    cout << right << setw(20) << "Size of int:" << setw(20) << sizeof(int) << " bytes" << endl;
    cout << setw(20) << "Size of float:" << setw(20) << sizeof(float) << " bytes" << endl;
    cout << setw(20) << "Size of double:" << setw(20) << sizeof(double) << " bytes" << endl;
    cout << setw(20) << "Size of char:" << setw(20) << sizeof(char) << " bytes" << endl;
    cout << setw(20) << "Size of bool:" << setw(20) << sizeof(bool) << " bytes" << endl;


    cout << "--------------------------------------------" << endl;

    // 7. Demonstrate Type Casting
    /* On this step I've learnt how to change the data type to be read as another */

    int num1;
    int num2;

    cout << "Demonstranting Type Casting." << endl;
    
    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Integer division: " << (num1 / num2) << endl;
   
    cout << "Decimal division (type cast): " << (static_cast<float>(num1) / num2) << endl;


    return 0;
}