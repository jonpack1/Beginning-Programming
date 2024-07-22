//Jona Pack
//OCCC - Beginning Programming
// PC4-12
#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	//cos
	const double price = 99.0;
	//my variables
	double discountRate=0;
	double discount=0;
	double quantitiy;
	double totalPrice;
	double quantity;
	double regular_price;
	//inpuut
	cout << "Please enter your quantity: ";
	cin >> quantity;


	

	//decision
	if (quantity >= 10 && quantity <= 19) {
		discountRate = .2;
	}
	if (quantity >= 20 && quantity <= 49) {

		discountRate = .3;
	}
	if (quantity >= 50 && quantity <= 99) {
		discountRate = .4;
	}
	if (quantity >= 100) {
		discountRate = .5;
	}
	if (quantity < 0){
		cout << "Error. Enter a number above 0. ";
		return EXIT_FAILURE;
	}


	//calc
	discount = discountRate *  price * quantity;
	regular_price = price * quantity;

	totalPrice = regular_price - discount;



	//output
	cout << "Discount Rate: " << discountRate*100 <<"%" << endl;
	cout << endl;
	cout << setprecision(2) << fixed;
	//cout << setw(25) << left << "Your quantity : " << setw(10) << right << quantity << endl;
	cout << setw(25) << left << "Regular Price : " << setw(10) << right << regular_price << endl;
	cout << setw(25) << left << "Discount : " << setw(10) << right << discount  << endl;
	cout << setw(25) << left << "Total price : " << setw(10) << right << totalPrice << endl;







	return 0;
}