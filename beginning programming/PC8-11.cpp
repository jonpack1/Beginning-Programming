//Jon Pack
//OCCC - Beginning Programming
//PC8-11

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Prototypes
void selectionSort(string[], int);
void displayArray(string[], int);
void readFileIntoArray(string[], int);

int main()
{
    const int NUM_NAMES = 51;
    string names[NUM_NAMES];

    readFileIntoArray(names, NUM_NAMES);

    cout << "UNSORTED: \n_________________________" << endl;
    displayArray(names, NUM_NAMES);

    selectionSort(names, NUM_NAMES);

    cout << "SORTED: \n_________________________" << endl;
    displayArray(names, NUM_NAMES);

    return 0;
}

// Read
void readFileIntoArray(string array[], int NUM_NAMES)
{
    string file_name;
    cout << "FILENAME" << endl;
    cin >> file_name;

    // Open
    ifstream inputFile;
    inputFile.open(file_name);

    // Handle
    if (!inputFile)
    {
        cout << "Invalid file";
        exit(1);
    }
    else
    {
        // Read
        int index = 0;

        while (getline(inputFile,array[index]))
        {
            cout << array[index] << endl;
            index++;
        }

        // Close
        inputFile.close();
    }
}

// Selection Sort
void selectionSort(string array[], int ARRAY_SIZE)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        // Find the index of the minimum element in the unsorted part of the array
        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }

        // Swap the minimum element with the element at start_index
        if (min_index != start_index)
        {
            swap(array[start_index], array[min_index]);
        }
    }
}

// Define the displayArray function
void displayArray(string array[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << array[i] << endl;
    }
}