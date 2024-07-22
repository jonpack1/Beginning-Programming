//Jon Pack
//OCCC - Beginning Programming
//daysOut

#include<iostream>
#include<iomanip>

using namespace std;
//prototypes. theyre defined below main
int numEmployees();
int daysAbsent(int);
double averageDaysAbsent(int, int);
int inputValidate(int, int);


int main() {



	//local main variables
	int numberOfEmployees;
	int totalDaysAbsent;

	double averageAbsence;
	
	numberOfEmployees = numEmployees();
	cout << endl;

	totalDaysAbsent = daysAbsent(numberOfEmployees);
	cout << endl;

	averageAbsence = averageDaysAbsent(numberOfEmployees, totalDaysAbsent);

	//display
	cout << "Number of employees is ";
	cout << numberOfEmployees;
	cout << endl;

	cout << "Total days absent is ";
	cout << totalDaysAbsent;
	cout << endl;

	cout << "Average days absent is ";
	cout << fixed;
	cout << setprecision(2);
	cout << averageAbsence;
	cout << endl;
	cout << endl;




	return 0;
}

//inputValidate
int inputValidate(int num1, int num2) {

	while (!(cin >> num1) || num1 < num2) {

		cout << " Program error, please enter a positive number. ";
		cin.clear();
		cin.ignore(123, '\n');
			
		
	}

	return num1;



}





//numEmployees function
int numEmployees() {
	
	int num = 0;

	cout << " Please enter the number of employees." << endl;

	return inputValidate(num, 1);


}


//daysAbsent
int daysAbsent(int numberOfEmployees) {

	int totalDaysAbsent = 0;

	cout << "Enter number of employee absences.";
	cout << endl;

	for (int i = 0; i < numberOfEmployees; i++) {

		cout << "Employee number" << (i + 1) << ": "; //i+1 so index doesnt start at 0
		totalDaysAbsent += inputValidate(totalDaysAbsent, 0);

	}

	return totalDaysAbsent;



}


//averaging function
double averageDaysAbsent(int numberOfEmployees, int daysAbsent) {

	//easier to return calculation, than make an average variable
	return daysAbsent / static_cast<double>(numberOfEmployees);







}
