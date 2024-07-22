//Jon Pack
//OCCC - Beginning Programming
//starSearch

#include<iostream>
#include<iomanip>

using namespace std;



//function prototypes
void getJudgeData(double& score);
double inputValidate(double score);
double calcScore(double score1, double score2, double score3, double score4, double score5);
double findLowest(double score1, double score2, double score3, double score4, double score5);
double findHighest(double score1, double score2, double score3, double score4, double score5);




int main() {
    double score1, score2, score3, score4, score5;


    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);



    double average = calcScore(score1, score2, score3, score4, score5);

    return 0;
}





//input validator
double inputValidate(double score) {

    while (!(cin >> score) || score < 0 || score > 10) {

        cout << "Program Error, please enter a number 0-1   0: " << endl;
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
double calcScore(double score1, double score2, double score3, double score4, double score5) {

    
    double average;
    double lowest = findLowest(score1, score2, score3, score4, score5);
    double highest = findHighest(score1, score2, score3, score4, score5);
    

    
    


        cout << endl;
        cout << fixed << endl;
        cout << setprecision(2) << endl;
        cout << "lowest is " << lowest << endl;
        cout << "hightest is " << highest << endl;
        cout << endl;
        
        cout << endl;


    if (score1 == lowest)
        average = (score2 + score3 + score4 + score5) / 4;
    else if
        (score2 == lowest)
        average = (score1 + score3 + score4 + score5) / 4;
    else if
        (score3 == lowest)
        average = (score1 + score2 + score4 + score5) / 4;
    else if
        (score4 == lowest)
        average = (score1 + score2 + score3 + score5) / 4;
    else if
        (score5 == lowest)
        average = (score1 + score2 + score3 + score4) / 4;

    cout << fixed << endl;
    cout << setprecision(2) << endl;
    cout << "The average is: " << average << endl;
    return average;
}


//findLowest
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
    else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5) {

        return score4;
    }
    else if (score5 < score1 && score5 < score2 && score5 < score3 && score5 < score4) {

        return score5;
    }

}


//findHighest
double findHighest(double score1, double score2, double score3, double score4, double score5) {

    if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5) {

        return score1;

    }
    else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5) {

        return score2;
    }
    else if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5) {

        return score3;
    }
    else if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5) {

        return score4;
    }
    else if (score5 > score1 && score5 > score2 && score5 > score3 && score5 > score4) {

        return score5;
    }

}