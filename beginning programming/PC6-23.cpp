//Jon Pack
//OCCC - Beginning Programming
//isPrime

#include<iostream>
#include<fstream>

using namespace std;

//prtoytypes. defined after main
bool isPrime(int);

int main() {

	//variables to store filename and user range input
	int start;
	int end;
	string fileName;


	//input output
	cout << "Enter file name." << endl;
	cin >> fileName;

	cout << "Enter the starting number of the range: ";
	cin >> start;

	cout << "Enter the ending number of the range: ";
	cin >> end;

	
	

	//file opening
	ofstream outputFile;
	outputFile.open("primeNumb.txt");

		//file handling
	if (outputFile) {
	
		// Check if the file opened successfully
		if (outputFile) {
			// Iterate through the specified range and write prime numbers to the file
			for (int i = start; i <= end; i++) {
				if (isPrime(i)) {
					outputFile << i << endl;
					//cout << "Wrote: " << i << " to file\n";
				}
				//cout << "i is: " << i << endl;
			}

			//file closing
			outputFile.close();

			cout << "Prime numbers in the range " << start << " to " << end << " have been written to primeNumb.txt." << endl;
		}
		else {
			cout << "File could not be opened, please try again." << endl;
		}

		cout << "This program has listed all prime numbers in your desired file." << endl;

		return 0;
	}
	
	

	





	return 0;
}

//isPrime function
bool isPrime(int num) {


	if (num <= 1) {

		return false; //1 is neither prime nor composite
	}
	else {

		for (int i = 2; i < num; i++) {

			if (num % i == 0){
			return false; // If num is divisible by any number other than 1 and itself, it's not prime
			}
		}
	}

	return true; //if no divisor was found number is prime

		}
	







