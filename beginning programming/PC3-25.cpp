//Jon Pack
//OCCC - Beginning Programming
//WORD_GAME
#include<iostream>
#include<string>
using namespace std;

	int main() {
	//my variables
		string name;
		string age;
		string city;
		string school;
		string major;
		string hobby;
		string color;



	// input
		cout << "------------------------------------------" << endl;
		cout << "WORD_GAME " << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Please enter your name: " << endl;
		getline(cin, name);

		cout << "Age: " << endl;
		cin >> age;
		cin.ignore();

		cout << "City:" << endl;
		getline(cin, city);

		cout << "School: " << endl;
		getline(cin, school);

		cout << "Major: " << endl;
		getline(cin, major);

		cout << "Hobby: " << endl;
		getline(cin, hobby);

		cout << "Favorite Color: " << endl;
		getline(cin, color);




	
	//output

		cout << name << " is " << age << ", " << "years old. " << endl;
		cout << "They live in " << city << " and ";
		cout << school << " is their school. " << endl;
		cout << "Their major is " << major << "." << endl;
		cout << color << " is their favorite color." << endl;
		cout << "their favorite hobby is " << hobby << "." << endl;




		return 0;
}
