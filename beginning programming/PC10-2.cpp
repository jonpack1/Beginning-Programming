//Jon Pack
//OCCC - Beginning Programming
//backwardString

#include <iostream>
#include <string>

using namespace std;

//prototype
string reverseString(const string&);

int main()
{
    // Input
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    //function call
    string reversed = reverseString(input);

    // Display
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

//function
string reverseString(const string& original)
{
    string reversed;
    for (int i = original.length() - 1; i >= 0; i--)
    {
        reversed += original[i];
    }
    return reversed;
}