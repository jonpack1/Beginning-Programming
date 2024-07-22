// Jon Pack
// OCCC - Beginning Programming 
// Chapter 2 Homework "Miles Per Gallon"
#include <iostream>
using namespace std;
int main() {

	
	int gallons;
	double miles;
	double milesPerGallon;

	
	cout << "how many miles? ";
	cin >> miles;

	cout << "how many gallons? ";
	cin >> gallons;

	milesPerGallon = miles / gallons;

	cout << milesPerGallon;

return 0;
}