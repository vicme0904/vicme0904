/*

Created by Victoria Rossener Mesa on 11/05/2024


*/


#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int StudentMax = 70; //This will be the maximum number of students inside the array
const int SubjectsMax = 4; // The total of subjects will be 4 eventurally, so themax in the array needs to be 4

int main() {
	vector <string> names;

	int grades[StudentMax][SubjectsMax]{}; // 2D Array for the grades, creating a table of number of studends x subjects
	int numStudents = 0; // inicializing at 0
	int numSubjects = 3; // they need to put 3 subjects, so here they are. Lateron the assignment will be increased by 1, bieng 4 subjects
	int choice; // to make sure that the switch case works, im also doing a menuso everything is organized
		
	
	do { // creating a menu so gathering the information is easier
			cout << " " << endl; 
			cout << "Welcome to Grade Management System \n" 
				<< "Please choose one of the following (0-5)" << endl; 
			cout << "1. Add Student: \n"; 
			cout << "2. Display Students and Grades: \n"; 
			cout << "3. Display Avarage of Grades: \n"; 
			cout << "4. Add New Subject and Grade (maximum of four subjects): \n";  
			cout << "5. Remove Last Student: \n";  
			cout << "0. Exit System. " << endl; 
			cout << "Enter your choice: "; 
			cin >> choice; 

			switch (choice) { 
			
			case 1: { //Gathering student info
				if (numStudents < StudentMax) {
					string Studentname;
					cout << "Enter student's name: ";
					cin >> Studentname;
					names.push_back(Studentname);
					cout << "Enter grades for " << numSubjects << " subjects: ";
						for (int j = 0; j < numSubjects; ++j) { 
							cin >> grades[numStudents][j];
						}
					++numStudents;
					cout << "Student added." << endl;
					cout << endl;
				}

				else {
					cout << "Maximum number of students reached." << endl;
					cout << endl;
				}
			}


			case 2: { // Displaying the table
				if (numStudents == 0) {
					cout << "No students to display." << endl;
				}
				else {
					cout << fixed << setw(10) << "Student";
					for (int j = 0; j < numSubjects; ++j) {
						cout << fixed << setw(10) << "Subject" << (j + 1);
					}

					cout << endl;


					for (int i = 0; i < numStudents; ++i) {
						cout << fixed << setw(10) << names[i];
						for (int j = 0; j < numSubjects; ++j) {
							cout << fixed << setw(10) << grades[i][j];
						}
						cout << endl;
					}
				}
				break;
			}


			case 3: { //Giving the avarage
				if (numStudents == 0) {
					cout << "No students to display.\n";
				}


				else {
					cout << "\nAverage Grades:\n";
					for (int i = 0; i < numStudents; ++i) {
						double sum = 0;

						
						for (int j = 0; j < numSubjects; ++j) {
							sum += grades[i][j];
						}
						double avg = sum / numSubjects;
						cout << names[i] << ": " << fixed << setprecision(1)
							<< avg << endl;
					}
				}
				break;


			}
			case 4: {
				if (numSubjects < SubjectsMax) {
					cout << "Adding new subject...\n";
					for (int i = 0; i < numStudents; ++i) {
						cout << "Enter grade for " << names[i] << " for the new subject: ";
							cin >> grades[i][numSubjects];
					}
					++numSubjects;


					// Display updated student information
					cout << "\nStudent\t";
					for (int j = 0; j < numSubjects; ++j) {
						cout << "Subject" << (j + 1) << "\t";
					}
					cout << endl;

					for (int i = 0; i < numStudents; ++i) {
						cout << names[i] << "\t";
						for (int j = 0; j < numSubjects; ++j) {
							cout << grades[i][j] << "\t\t";
						}
						cout << endl;
					}


					// Display updated averages
					cout << "\nNew Average Grades:\n";
					for (int i = 0; i < numStudents; ++i) {
						double sum = 0;

						for (int j = 0; j < numSubjects; ++j) {
							sum += grades[i][j];
						}
						double avg = sum / numSubjects;
						cout << names[i] << ": " << fixed << setprecision(2)
							<< avg << endl;
					}

				}
				else {
					cout << "Maximum number of subjects reached.\n";
				}
				break;
			}




			case 5: { //Removing Last student
				if (numStudents > 0) {
					names.pop_back(); // Remove the last student's name
					--numStudents; // Remove the last student's grades from the count
					cout << "Last student has been removed." << endl;
				}


				else {
					cout << "No students to remove." << endl;
				}
				break;
			}


			case 0: {
				cout << "Exiting Grade Manager..." << endl;
				exit(0);
			}


			default: {
				break;
			}
			}


		} while (choice != 0);
	return 0;
}
