// Jon Pack
// OCCC - Beginning Programming
// PC3-12
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	//my variables
	double F;
	double C;


    //input
	cout << "\nEnter degrees in Celsius: ";
	cin >> C;


	//calculation
	F = ((9.0 / 5.0) * C) + 32;

	//output
	cout << setprecision(1) << fixed << right << endl;
	cout << "Celsius temp = " << setw(10) << C << endl;
	cout << "Fahrenheit temp = " << setw(10) << F << endl;





	return 0;
}