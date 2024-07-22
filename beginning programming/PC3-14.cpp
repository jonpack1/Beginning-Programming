//Jon Pack	
//OCCC - Beginning Programming
// MONTHLY_SALES_TAX
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//my variables
	const double STATE_TAX = .04;
	const double COUNTY_TAX = .02;
	const double SALES_TAX = .06;
	string month;
	string year;
	double T; //total
	double S; //product sales
	double TOTAL_STATE_TAX;
	double TOTAL_SALES_TAX;
	double TOTAL_COUNTY_TAX;

	//input
	cout << "Enter the month for report: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter total amount collected for the month: ";
	cin >> T;
	//calculation
	S = T / 1.06;
		TOTAL_COUNTY_TAX = S * COUNTY_TAX;
		TOTAL_STATE_TAX = S * STATE_TAX;
		TOTAL_SALES_TAX = S * SALES_TAX;
	//output
		cout << setprecision(2) << fixed << left << endl;
	    cout << "-------------------------------------" << endl;
		cout << "Month: " << month << "    Year: " << year << endl;
		cout << "-------------------------------------" << endl;
		cout << "Total Collected: " << setw(10);
		cout << T << endl;
		cout << "sales:            " << setw(10);
		cout << S << endl;
		cout << "County Sales Tax: " << setw(10);
		cout << TOTAL_COUNTY_TAX << endl;
		cout << "State Sales Tax: " << setw(10);
		cout << TOTAL_STATE_TAX << endl;



return 0;
}