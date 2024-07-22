//Jon Pack
//OCCC - Beginning Programing
//temp table

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    //my variables

    double startTemp, stopTemp;


    //output
    cout << "Enter the start temperature: ";
    cin >> startTemp;

    cout << "Enter the stop temperature: ";
    cin >> stopTemp;

    
    if (startTemp > stopTemp) {
        swap(startTemp, stopTemp);
    }

    // Calculate
    int floorStart = floor(startTemp);
    int ceilStop = ceil(stopTemp);

    // output
    cout << "Celsius  Fahrenheit" << endl;
    cout << "-------  ----------" << endl;

    
    for (int celsius = floorStart; celsius <= ceilStop; ++celsius) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        cout << right << setw(7) << celsius << "  " << fixed << setprecision(2) << setw(10) << fahrenheit << endl;
    }

    return 0;
}