//Jon Pack
//OCCC - Beginning Programming
//BANK

#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	//my variables
	const double EXTRA_MONTHLY_CHARGE = 10;
	const double OVERDRAWN = 20;
	const double TEN_CENTS = .10;
	const double EIGHT_CENTS = .08;
	const double SIX_CENTS = .06;
	const double FOUR_CENTS = .04;

	double beginning_balance;
	double ending_balance;
	double total_monthly_charges = 20;
	double deposit;
	double checkAmount;
	double atmAmount;

	int number_of_checks;
	int number_of_transactions;
	

	//input
	cout << "what is the balance? ";
	cin >> beginning_balance;

	if (beginning_balance <= 0) {
		
		cout << "Your account is overdrawn.";
		cout << "An overdrawn fee of $20 will be applied." << endl;
		exit(1);

	}
	else {
		cout << "Thank you." << endl;
	}

	cout << "What is the deposit amount? ";
	cin >> deposit;

	//calculation

	if (deposit <= 0) {
		cout << "Your account balance has been accredited with " << endl;
		cout <<"$" << deposit;
		
		exit(1);

		ending_balance += deposit;
	
	}
	else {
		cout << "Thank you." << endl;
	}
	

	cout << "Please enter number of checks." << endl;
	cin >> number_of_checks;
	

	if(number_of_checks < 0) {
		cout << "The number you are trying to enter is not valid, please try agaion.";
		exit(1);

	}

	

	if (number_of_checks > 0) {


		cout << "How much is the check for?" << endl;
		cin >> checkAmount;
	}

	cout << "Please enter number of ATM transactions.";
	cin >> number_of_transactions;

	cout << "How much? ";
	cin >> atmAmount;


	if (number_of_transactions <= 0) {
		cout << "Please enter a valid number and try again.";
	}
	 
		

		if (number_of_checks >= 0 && number_of_checks <= 19) {
			total_monthly_charges += (number_of_checks * TEN_CENTS);
				
		}
		 if (number_of_checks >= 20 && number_of_checks <= 39) {
			total_monthly_charges += (number_of_checks * EIGHT_CENTS);

		}
		 if (number_of_checks >= 40 && number_of_checks <= 59) {
			total_monthly_charges += (number_of_checks * SIX_CENTS);

		}
		else if (number_of_checks >= 60) {
			total_monthly_charges += (number_of_checks * FOUR_CENTS);

		}


		 //output 
		 cout << setprecision(2) << fixed;

		 cout << "****************************************** " << endl;
		 cout << "****************************************** " << endl;
		 cout << endl;
		 cout << endl;
		 cout << "_________________________________________" << endl;
		 cout << " Intital Balance                   " << endl;
		 cout << "_________________________________________ " << endl;
		 cout <<  "$" << beginning_balance << endl;
		 cout << "__________________________________________ " << endl;
		 cout << endl;
		 cout << endl;
		 cout << "___________________________________________" << endl;
		 cout << "             Deposit                     " << endl;
		 cout << "_________________________________________ " << endl;
		 cout << "$" << deposit << endl;
		 cout << "__________________________________________" << endl;
		 cout << endl;
		 cout << endl;
		 cout << "_________________________________________" << endl;
		 cout << "               Checks                    " << endl;
		 cout << "_________________________________________ " << endl;
		 cout << setw(10) << left << "Number of Checks : " << setw(10) << left << number_of_checks << endl;
		 cout << "Check Amount     : $" << checkAmount << endl;
		 cout << "__________________________________________ " << endl;
		 cout << endl;
		 cout << endl;
		 cout << "___________________________________________" << endl;
		 cout << "             ATM                   " << endl;
		 cout << "_________________________________________ " << endl;
		 cout << setw(10) << left << "Transactions : "  << setw(10) << left << number_of_transactions << endl;

		 cout << setw(10) << left <<  "Cash Amount  : $" << setw(10) << left << atmAmount << endl;
		 cout << "__________________________________________" << endl;
		 cout << endl;
		 cout << endl;
		 cout << "///////////////////////////////////////////" << endl;
		 cout << "       Monthly service charges            " << endl;
		 cout << "//////////////////////////////////////////" << endl;
		 cout << "$" << total_monthly_charges << endl;
		 
		 cout << endl;
		 cout << endl;
		 cout << "****************************************** " << endl;
		 cout << "****************************************** " << endl;




	






	
		
	return 0;
}
