// Section11_Challenge_MySolution.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses functions.

    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.

    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.

        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth

    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!

    Finally,  don't forget to use function prototypes!
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void printMenu();
void processInput(string &input);
void processSelection(const string &input, vector<int> &intList);

void optionPrintList(const vector<int> &intList);
void optionAddNumber(vector<int> &intList);
void optionCalcMean(vector<int> &intList);
void optionSmallest(vector<int> &intList);
void optionLargest(vector<int> &intList);
void optionQuit();

int main()
{
    bool exitMain{ false };
    vector <int> myIntegerList{};
    string userInput{};

    do {
        printMenu();
        processInput(userInput);
        processSelection(userInput, myIntegerList);
    } while (userInput != "Q");

    return 0;
}


void printMenu() {
    cout << "\n//---------- MENU ----------\n" << endl;
    cout << "P - Print numbers\n";
    cout << "A - Add a number\n";
    cout << "M - Display mean of the numbers\n";
    cout << "S - Display the smallest number\n";
    cout << "L - Display the largest number\n";
    cout << "Q - Quit\n" << endl;
    cout << "Please enter a character to select the corresponding choice from the above list: ";
}

void processInput(string &input) {
    cin >> input;
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
}

void processSelection(const string &input, vector<int> &intList) {
    if (input == "P") {
        optionPrintList(intList);
    }
    else if (input == "A") {
        optionAddNumber(intList);
    }
    else if (input == "M") {
        optionCalcMean(intList);
    }
    else if (input == "S") {
        optionSmallest(intList);
    }
    else if (input == "L") {
        optionLargest(intList);
    }
    else if (input == "Q") {
        optionQuit();
    }
    else {
        cout << "\nSelection invalid";
    }
}

void optionPrintList(const vector<int> &intList) {
    if (intList.size() == 0) {
        printf("\n[] - the list is empty\n");
    }
    else {
        printf("\n[ ");
        for (size_t i = 0; i < intList.size(); i++) {
            printf("%i ", intList[i]);
        }
        printf("]\n");
    }
}

void optionAddNumber(vector<int> &intList) {
    int userInteger {0};
    printf("Enter number: ");
    cin >> userInteger;
    intList.push_back(userInteger);
    printf("\n[ %i ] was added\n", intList.back());
}

void optionCalcMean(vector<int> &intList) {
    if (intList.size() == 0) {
        printf("Unable to calculate the mean - no data\n");
    }
    else {
        int average{ 0 };
        for (auto num : intList) {
            average += num;
        }
        printf("\nAverage across myIntegerList elements (double): %f\n", static_cast<double>(average) / intList.size());
    }
}

void optionSmallest(vector<int> &intList) {
    if (intList.size() == 0) {
        printf("Unable to determine the smallest number - list is empty\n");
    }
    else {
        int smallestVal{ 0 };
        for (size_t i = 0; i < intList.size(); i++) {
            if (smallestVal > intList[i] || smallestVal == 0)
                smallestVal = intList[i];
        }
        printf("\nThe smallest number is [ %i ]\n", smallestVal);
    }
}

void optionLargest(vector<int> &intList) {
    if (intList.size() == 0) {
        printf("Unable to determine the largest number - list is empty\n");
    }
    else {
        int largestVal{ 0 };
        for (size_t i = 0; i < intList.size(); i++) {
            if (largestVal < intList[i] || largestVal == 0)
                largestVal = intList[i];
        }
        printf("\nThe largest number is [ %i ]\n", largestVal);
    }
}

void optionQuit() {
    printf("\nGoodbye!\n");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
