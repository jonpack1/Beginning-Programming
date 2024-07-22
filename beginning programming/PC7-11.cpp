//Jon Pack
//OCCC - Beginning Programming
//examGrader

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Function to read answers from a file
vector<char> readAnswers(const string& filename) {
    vector<char> answers;
    ifstream file(filename);
    char answer;

    if (!file) {
        cout << "Error opening file: " << filename << endl;
        exit(1);
    }

    while (file >> answer) {
        answers.push_back(answer);
    }

    file.close();
    return answers;
}

// Function to grade the exam
void gradeExam(const vector<char>& correctAnswers, const vector<char>& studentAnswers) {
    int numQuestions = correctAnswers.size();
    int numCorrect = 0;

    cout << "Question\tCorrect\tIncorrect" << endl;

    for (int i = 0; i < numQuestions; ++i) {
        cout << "   " << (i + 1) << "\t\t" << correctAnswers[i] << "\t";

        if (studentAnswers[i] == correctAnswers[i]) {
            cout << " ";
            numCorrect++;
        }
        else {
            cout << studentAnswers[i];
        }

        cout << endl;
    }

    cout << "--------------------------------" << endl;
    cout << "Total Correct Answers: " << numCorrect << "/" << numQuestions << endl;
    cout << "Total Incorrect Answers: " << (numQuestions - numCorrect) << "/" << numQuestions << endl;
}

int main() {
    string correctFile, studentFile;

    cout << "Enter the filename containing correct answers: ";
    cin >> correctFile;

    cout << "Enter the filename containing student answers: ";
    cin >> studentFile;

    vector<char> correctAnswers = readAnswers(correctFile);
    vector<char> studentAnswers = readAnswers(studentFile);

    if (correctAnswers.size() != studentAnswers.size()) {
        cerr << "Error: The number of answers in the two files does not match." << endl;
        return 1;
    }

    gradeExam(correctAnswers, studentAnswers);

    return 0;
}