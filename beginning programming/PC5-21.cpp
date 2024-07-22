
//Jon Pack
//OCCC - Beginning Programming
//Random


#include<iostream>
#include <ctime>
#include <cstdlib>



using namespace std;

int main() {

    //my variables
    long long int secretNumber = rand() % 900000000 + 100000000;
    long long int guess;
    int attempts = 0;


    srand(time(0));

    //input

    cout << "Would you like to play a game?" << endl;
    cout << "Pick a number between 100000000 and 999999999." << endl;
    cout << secretNumber;

    //calculation

    do {
        cout << "Enter your Choice : ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Im afraid that was too low. Try again!" << endl;
        }
        else if (guess > secretNumber) {
            cout << "I'm afraid that was too high. Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the secret number " << secretNumber << " in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);







    return 0;
}
