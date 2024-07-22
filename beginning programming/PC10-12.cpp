//Jon Pack
//OCCC - Beginning Programming
//passwordChecker

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

//prototype
bool passwordCheck(string);

int main()
{
	//my variables
	string password;


	//input
	cout << "Enter Password: " << endl;
	getline(cin, password);


	//output
	
	while (!passwordCheck(password))
	{
		cout << "That is not correct. " << endl;
		cout << endl;
		cout << "Careful you only have unlimited attempts remaining" << endl;
		getline(cin, password);
	}
	cout << "Nicely done" << endl;


	return 0;
}

//function
bool passwordCheck(string password)
{

	bool upper = false;
	bool lower = false;
	bool special = false;
	bool digit = false;
	bool twelve = false;
    

	for (int i = 0; i < password.length(); i++) {
	
		if (isupper(password[i]))
			upper = true;
		if (islower(password[i]))
			lower = true;
		if (isdigit(password[i]))
			digit = true;
		if (!isalpha(password[i]) && !isdigit(password[i]))
			special = true;
		if (password.length() >= 12)
			twelve = true;
	}
	//check if criteria is met
	return upper && lower && special && digit && twelve;

}