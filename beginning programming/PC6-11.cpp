//Jon Pack
//OCCC - Beginning Programming
//lowestScore

#include<iostream>
#include<iomanip>

using namespace std;



// Function prototypes
void getJudgeData(double& score);
double inputValidate(double score);
void getScore(double &score);
double calcAverage(double score1, double score2, double score3, double score4, double score5);
double findLowest(double score1, double score2, double score3, double score4, double score5);




int main() {
    double score1, score2, score3, score4, score5;

    // Input and validate scores
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    // Calculate and display the average of the scores with two decimal places
    double average = calcAverage(score1, score2, score3, score4, score5);

    return 0;
}



//display average

//input validator
double inputValidate(double score) {

    while (!(cin >> score) || score < 0 || score > 100) {
        //cout << score << " ";
        cout << "Program Error, please enter a number 0-100: " << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }
    //cout << score << " ";
    return score;
}


//getscore
void getScore(double &score) {

    cout << "What is the score? " << endl;
    score = inputValidate(score);

}





//judge data
void getJudgeData(double &score) {

    //should be the same as getscore
    //cout << "What is the score? " << endl;
    //score = inputValidate(score);

}




double calcAverage(double score1, double score2, double score3, double score4, double score5) {
    
    double average;
    double lowest = findLowest(score1, score2, score3, score4, score5);

    if (score1 == lowest)
        average = ( score2 + score3 + score4 + score5) / 4;
    else if
        (score2 == lowest)
        average = ( score1 + score3 + score4 + score5) / 4;
    else if
        (score3 == lowest)
        average = ( score1 + score2 + score4 + score5) / 4;
    else if
        (score4 == lowest)
        average = ( score1 + score2 + score3 + score5) / 4;
    else if
        (score5 == lowest)
        average = (score1 + score2 + score3 + score4) / 4;


    cout << "The average is: " << average << endl;
    return average;
}

double findLowest(double score1, double score2, double score3, double score4, double score5) {

    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5) {

        return score1;

    }
    else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5) {

        return score2;
    }
    else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5) {

        return score3;
    }
    else if (score4 < score1 && score4 < score2 && score4 < score3 && score4< score5) {

        return score4;
    }
    else if (score5 < score1 && score5 < score2 && score5 < score3 && score5 < score4) {

        return score5;
    }

}