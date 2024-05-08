// Revised question 1 code

#include <iostream>
#include <fstream>
#include <limits>
#include <string>
using namespace std;

// Global array and variable
const int ARRAY_SIZE = 10;
int DATA[10];

int main() 
{

// Initialized variables for-for loops
	int even_count = 0;
	int odd_count = 0;
	int index;

// Start of the .txt file
    std::ofstream outputFile;
    outputFile.open("Junior.txt");

    if (!outputFile.is_open()) // File opening parameter
    {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

// For loop prompts user to input data 10 times
	cout << "Enter 10 numbers: " << endl;

	for (index = 0; index < ARRAY_SIZE; ++index)	
    {

        while(!(cin >> DATA[index])) // Input validation (Integers only)
        {
            cout << "Invalid input. Please enter a number: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n' );
        }

        cin >> DATA[index];
    }

// For loop to determine if the user data is even or odd
	for (index = 0; index < ARRAY_SIZE; ++index)
    {
	    if (DATA[index]% 2 == 1)
        {
	        ++odd_count;
        }
	    else 
        {
            ++even_count;
        }
    }	

// Printed output to terminal
    cout << "Number of odds: " << even_count << endl;
	cout << "Number of evens: " << odd_count << endl;

// Printed output to file
    outputFile << "Number of odds: " << even_count << endl;
    outputFile << "Number of evens: " << odd_count << endl;

    outputFile.close(); // File closes

    return 0; // End of program
}

