//Jon Pack
//OCCC - Beginning Programming
//studentLineUp

#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {

	//my variables

	ifstream inputFile;
	string fileName;
	string name;
	string first;
	string last;






	//input
	cout << "Enter file name." << endl;
	getline(cin, fileName);







	//Calculate

	inputFile.open(fileName);

	if (!inputFile) {
		cout << "An error occured while opening file." << endl;
		return (EXIT_FAILURE);
	}

	//initial value for first and last
	getline(inputFile, name);
	first = name;
	last = name;
	while (getline(inputFile, name)) {
		//cout << name << endl;
		if (first > name) {
			first = name;
		}
		if (last < name) {
			last = name;
		}

	}
	inputFile.close();

	










	//output
	cout << endl;
	cout << endl;
	cout << first << endl;
	cout << last << endl;


























	return 0;
}

