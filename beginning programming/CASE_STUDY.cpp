//Jon Pack
//OCCC - Beginning Programming
//CASE_STUDY
#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	//my variables
	double COST = 0.23;
	double CHARGE = 0.5;
    double LENGTH;
	double WIDTH;
	double HEIGHT;
	double VOLUME;
	double PROFIT;
//input
	cout << "Enter Length: " << endl;
	cin >> LENGTH;

	cout << "Enter Width " << endl;
	cin >> WIDTH;

	cout << "Enter Height " << endl;
	cin >> HEIGHT;

	//calc
	VOLUME = LENGTH * WIDTH * HEIGHT;
	COST = VOLUME * 0.23;
	CHARGE = VOLUME * 0.5;
	PROFIT = CHARGE - COST;

	





	//output
	cout << fixed;
	cout << showpoint;
	cout << setprecision(3);
	cout << "------------------------" << endl;
	cout << "  Specifications Table     " << endl;
	cout << "------------------------" << endl;
	cout << "Crate Vol: " << VOLUME << " Cubic Feet " << endl;
	cout << "Length: " << LENGTH << endl;
	cout << "Width: " << WIDTH << endl;
	cout << "Height: " << HEIGHT << endl;
	cout << "-----------------------" << endl;
	cout << "   End Of Table     " << endl;
	cout << "-----------------------" << endl;

	cout << "xxxxxxxxxxxxxxxxxxxxxxx " << endl;


	cout << fixed;
	cout << showpoint;
	cout << setprecision(2);
	cout << "-------------------" << endl;
	cout << "   Money Table     " << endl;
	cout << "-------------------" << endl;
	cout << "Cost: $" << COST << endl;
	cout << "Charge $" << CHARGE << endl;
	cout << "Profit $" << PROFIT << endl;
	cout << "-------------------" << endl;
	cout << " End Of Table " << endl;
	cout << "-------------------" << endl;

	cout << "xxxxxxxxxxxxxxxxxxx " << endl;
	return 0;

}