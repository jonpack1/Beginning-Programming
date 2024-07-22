//Jon Pack
//OCCC - Beginning  Programming
//coinToss

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void coinToss();
int verify_input(int);





int main() {
	//my variables
	int choice = 0;
	int heads = 0;
	int tails = 0;
	
	

	//calculation
	unsigned seed = time(0);
	srand(seed);



	//display
	cout << "How many tosses would you like? ";
	choice = verify_input(choice);

	//loop for input information
	for (int i = 0; i < choice; i++) {

		coinToss();

	}

	for (int i = 0; i < choice; i++) {
		bool isHeads = rand() % 2 == 0;
		if (isHeads) {
			heads++;
		}
		else {
			tails++;
		}

	}

	
	cout << endl;
	cout << endl;
	cout << "****************************" << endl;
	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;
	cout << "**************************" << endl;
	cout << endl;


	return 0;
}

//This function will verify user input 

int verify_input(int num) {

	while (!(cin >> num) || num <= 0) {

		cout << "Program error, please enter a number above 0.";
		exit(1);

	}
	return num;


}


void coinToss() {
	//my constant variables
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 2;

	//my variables
	int coin;

	//Assign a random number to the coin variable
	coin = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	//Display heads or tails with conditional operator
	cout << (coin == MIN_VALUE ? "Heads" : "Tails") << endl;






}