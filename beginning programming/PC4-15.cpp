//Jon Pack
//OCCC - Beginning Programming
// SHIPPING_CHARGES

#include<iostream>
#include<iomanip>

using namespace std;


int main() {


	//my variables
	const int WEIGHT_MIN = 0;
	const int WEIGHT_MAX = 20;
	const int DISTANCE_MIN = 10;
	const int DISTANCE_MAX = 3000;

	double distance = 0;
	double PACKAGE_WEIGHT;
	double TOTAL_CHARGES = 0;




	//input

	cout << "How many kilograms is the package? " << endl;
	cin >> PACKAGE_WEIGHT;
	if (PACKAGE_WEIGHT > 20) {
		cout << "Sorry, you have exceeded the maximum weight specifications." << endl;
		abort();
	}

	cout << "Please enter distance. " << endl;
	cin >> distance;

	if (distance > 3000) {
		cout << "Sorry, that distance is not valid. Please try again." << endl;
		abort();
	}







	//calculation



	if (distance < 500) {
		distance = 500;
	}

	if (PACKAGE_WEIGHT < 0) {
		PACKAGE_WEIGHT = 0;
	}
	


	
	else {
		

		if (PACKAGE_WEIGHT <= 0) {
			TOTAL_CHARGES = (distance / 500) * 1.10;
			
		}if (PACKAGE_WEIGHT > 0 && PACKAGE_WEIGHT <= 2) {
			TOTAL_CHARGES = (distance / 500) * 2.20;

		}if (PACKAGE_WEIGHT > 2 && PACKAGE_WEIGHT <= 6) {
			TOTAL_CHARGES = (distance / 500) * 2.20;

		}if (PACKAGE_WEIGHT > 6 && PACKAGE_WEIGHT <= 10) {
			TOTAL_CHARGES = (distance / 500) * 3.70;
		}
		if (PACKAGE_WEIGHT > 10 && PACKAGE_WEIGHT <= 20) {
			TOTAL_CHARGES = (distance/ 500) * 4.80;
		}
	}






	//output
	cout << setprecision(2) << fixed;
	cout << "Total Charges " << "$ " << TOTAL_CHARGES << endl;
	
	cout << "*************************" << endl;
	cout << "Total Distance " << endl;
	cout << distance;











	return 0;
}