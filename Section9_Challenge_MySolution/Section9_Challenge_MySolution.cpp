// Section9_Challenge_MySolution.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:

    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
For example, [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    bool exitMain {false};
    vector <int> myIntegerList {};

    while (!exitMain){  
        string input {};
        cout << "\n//---------- MENU ----------\n" << endl;
        cout << "P - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q - Quit\n" << endl;
        cout << "Please enter a character to select the corresponding choice from the above list: ";
        cin >> input;

        if (input == "P" || input == "p") {
            if(myIntegerList.size() == 0){
                printf("\n[] - the list is empty\n");
            }
            else {
                printf("\n[ ");
                for (size_t i = 0; i < myIntegerList.size(); i++) {
                    printf("%i ", myIntegerList[i]);
                }
                printf("]\n");
            }
        }
        else if (input == "A" || input == "a") {
            int userInteger {0};
            printf("Enter number: ");
            cin >> userInteger;
            myIntegerList.push_back(userInteger);
            printf("\n[ %i ] was added\n", myIntegerList.back());
        }
        else if (input == "M" || input == "m") {
            if (myIntegerList.size() == 0) {
                printf("Unable to calculate the mean - no data");
            }
            else {
                int average {0};
                for (auto num: myIntegerList) {
                    average += num;
                }
                printf("\nAverage across myIntegerList elements (double): %f\n", static_cast<double>(average) / myIntegerList.size());
            }
        }
        else if (input == "S" || input == "s") {
            if (myIntegerList.size() == 0) {
                printf("Unable to determine the smallest number - list is empty");
            }
            else {
                int smallestVal {0};
                for (size_t i = 0; i < myIntegerList.size(); i++) {
                    if(smallestVal > myIntegerList[i] || smallestVal == 0)
                        smallestVal = myIntegerList[i];
                }
                printf("\nThe smallest number is [ %i ]\n", smallestVal);
            }
        }
        else if (input == "L" || input == "l") {
            if (myIntegerList.size() == 0) {
                printf("Unable to determine the largest number - list is empty");
            }
            else {
                int largestVal {0};
                for (size_t i = 0; i < myIntegerList.size(); i++) {
                    if (largestVal < myIntegerList[i] || largestVal == 0)
                        largestVal = myIntegerList[i];
                }
                printf("\nThe largest number is [ %i ]\n", largestVal);
            }
        }
        else if (input == "Q" || input == "q") {
            printf("\nGoodbye!\n");
            exitMain = true;
        }
        else {
            cout << "\nSelection invalid";
        }
    }
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
