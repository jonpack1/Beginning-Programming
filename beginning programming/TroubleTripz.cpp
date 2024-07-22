//Jon Pack
//OCCC - Beginning Programming
//ExtraCredit


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //my variables
    int numTribbles = 1;

    //output
    cout << setw(8) << "Hours:" << setw(14) << "Tribbles:" << endl;

    // calculate
    cout << setw(8) << "0" << setw(14) << "1" << endl;

    for (int hours = 12; hours <= 72; hours += 12) {
        numTribbles += numTribbles * 10; 
        cout << setw(8) << hours << setw(14) << numTribbles << endl;

    }


    

    return 0;
}



