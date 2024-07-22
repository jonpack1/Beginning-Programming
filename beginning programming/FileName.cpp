//Jon Pack
//OCCC - Beginning Programming
//starSearch

#include<iostream>
#include<iomanip>

using namespace std;



//function prototypes
void getJudgeData(double& );
double inputValidate(double );
double calcScore(double [], int );
double findLowest(double [], int );
double findHighest(double [], int );




int main() {
    const int SIZE = 10;
    double score[SIZE];
    double average;

    for (int i = 0; i < SIZE; i++) {
        getJudgeData(score[i]);
    }

    

    //calc average
    average = calcScore(score, SIZE);

    return 0;
}





//input validator
double inputValidate(double score) {

    while (!(cin >> score) || score < 0 || score > 10) {

        cout << "Program Error, please enter a number 0-10: " << endl;
        cin.clear();
        cin.ignore(123, '\n');

    }

    return score;
}








//judge data
void getJudgeData(double& score) {


    cout << "What is the score? " << endl;
    score = inputValidate(score);

}



//calcAverage
double calcScore(double theScores[], int numScores) {


    double average = 0;
    double sum = 0;
    double lowest;
    double highest;

    lowest = findLowest(theScores, numScores);
    highest = findHighest(theScores, numScores);


    for (int i = 0; i < numScores; i++) {

        sum += theScores[i];
        

    }
    average = (sum - lowest - highest) / (numScores - 2);

    

   /* cout << endl;
    cout << endl;
    cout << "------------------------" << endl;
     cout << "Higest: " << highest << endl;
     cout << "Lowest: " << lowest << endl;
     cout << "_________________________" << endl; */



    cout << fixed << endl;
    cout << setprecision(2) << endl;
    cout << "The average is: " << average << endl;
    return average;
}


//findLowest
double findLowest(double theScores[], int numScores) {

    double lowest = theScores[0];
    
    for (int i = 0; i < numScores; i++) {
        if (lowest < theScores[i]) {
            lowest = theScores[i];
        }
    }
    return lowest;
}


//findHighest
double findHighest(double theScores[], int numScores) {

    double highest = theScores[0];

    for (int i = 0; i < numScores; i++) {
        if (highest > theScores[i]) {
            highest = theScores[i];
        }
    }
    return highest;
}