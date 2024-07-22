//Jon Pack
// OCCC - Beginning Programming
//Chapter 2/3 extra credit
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	//my variables
	const double sqft_per_acre = 43560;
	double acres;

	//input
	cout << "Enter number of acres: " << endl;
	cin >> acres;
	

	//calculation  
	double square_feet = acres * sqft_per_acre;


	//display
	cout << setprecision(2) << fixed << right << endl;
	cout << acres << " acres is equal to " << square_feet << " sqft " << endl;
	
	
	




	return 0;
}